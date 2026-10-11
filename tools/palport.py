#!/usr/bin/env python3
"""Port the matched sources of the NTSC-U build (SCUS-97328 v1.01, upstream gt4-decomp) to the PAL
build (SCES-51719 v1.00). The two executables share their code, but functions and globals sit at
shifted addresses. No US executable is needed: each source is compiled, and its code with
link-time values masked (dedup.masked_body) is searched for in the PAL executable. The PAL words
at the twin then give the PAL address of every symbol the source references (jal targets,
%hi/%lo pairs), which yields a US -> PAL address map for functions, globals and jump tables.

    palport.py objects [--jobs 4]   compile every source -> build/palport/objects.json
    palport.py locate               PAL twin of every source -> build/palport/located.json
    palport.py symbols              US -> PAL address of referenced symbols -> build/palport/addrmap.json
    palport.py stats                coverage of the map
    palport.py apply                rewrite src/, include/ and config/ to PAL addresses (names, files)
"""
import argparse
import re
import bisect
import json
import os
import shutil
import struct
import sys
from collections import Counter, defaultdict

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import dedup  # noqa: E402
import match  # noqa: E402
import project  # noqa: E402
import symbols  # noqa: E402

OUT = os.path.join(match.ROOT, "build", "palport")
OBJECTS = os.path.join(OUT, "objects.json")
LOCATED = os.path.join(OUT, "located.json")
ADDRMAP = os.path.join(OUT, "addrmap.json")
R_MIPS_26, R_MIPS_HI16, R_MIPS_LO16 = 4, 5, 6


def cmd_objects(jobs):
    """Compile every source once; keep its function words and relocations (by symbol name)."""
    srcs = project.sources(refresh=True)
    out = {}
    items = sorted(srcs.items())
    for k in range(0, len(items), 1000):
        part = items[k:k + 1000]
        objs = match.compile_many([p for _, p in part], jobs)
        for addr, src in part:
            obj = objs.get(src)
            if not obj:
                out[f"{addr:08x}"] = {"src": src, "error": "compile failed"}
                continue
            blob, srelocs, funcs = match.read_object(obj, want_symbols=True)
            if not funcs:
                out[f"{addr:08x}"] = {"src": src, "error": "no function"}
                continue
            _, foff, fsize = funcs[0]
            fsize = max(fsize, len(blob) - foff)
            words = match.trim_padding(list(struct.unpack_from(f"<{fsize // 4}I", blob, foff)))
            relocs = [[(o - foff) // 4, r[0], r[1], r[3]] for o, r in sorted(srelocs.items())
                      if foff <= o < foff + 4 * len(words)]
            out[f"{addr:08x}"] = {"src": src, "words": words, "relocs": relocs}
        batch = next((os.path.dirname(o) for o in objs.values() if o), None)
        if batch:
            shutil.rmtree(batch, ignore_errors=True)
        print(f"compiled {min(k + 1000, len(items))}/{len(items)}", flush=True)
    os.makedirs(OUT, exist_ok=True)
    json.dump(out, open(OBJECTS, "w"))
    bad = sum("error" in v for v in out.values())
    print(f"{len(out) - bad} objects, {bad} failed -> {OBJECTS}")


def masked(words):
    return tuple(dedup.masked_body(words))


def cmd_locate():
    """For every source: the PAL addresses whose code equals its masked code; ambiguous ones are
    settled by the US -> PAL shift of the nearest unambiguous neighbours."""
    objs = json.load(open(OBJECTS))
    text_addr, text = match.load_text()
    n = len(text) // 4
    pal = struct.unpack_from(f"<{n}I", text, 0)
    # Index every 8-byte-aligned position by its first 3 masked words.
    K = 3
    index = defaultdict(list)
    for i in range(0, n - K, 2):
        index[masked(pal[i:i + K])].append(i)
    cands = {}
    for key, o in objs.items():
        if "words" not in o:
            continue
        words = o["words"]
        mine = masked(words)
        hits = []
        if len(words) >= K:
            for i in index.get(masked(words[:K]), ()):
                if i + len(words) <= n and masked(pal[i:i + len(words)]) == mine:
                    hits.append(text_addr + 4 * i)
        cands[int(key, 16)] = hits
    # Shifts of the unique twins of non-trivial functions are the anchors.
    anchors = sorted((us, h[0] - us) for us, h in cands.items()
                     if len(h) == 1 and len(objs[f"{us:08x}"]["words"]) >= 6)
    keys = [a for a, _ in anchors]
    located, stats = {}, Counter()
    for us, hits in cands.items():
        if not hits:
            stats["no twin"] += 1
            continue
        j = bisect.bisect_left(keys, us)
        near = {anchors[k][1] for k in (j - 1, j, j + 1) if 0 <= k < len(anchors) and anchors[k][0] != us}
        if len(hits) == 1 and (len(objs[f"{us:08x}"]["words"]) >= 6 or hits[0] - us in near):
            located[us] = hits[0]
            stats["unique"] += 1
            continue
        pick = [h for h in hits if h - us in near]
        if len(pick) == 1:
            located[us] = pick[0]
            stats["by neighbours"] += 1
        else:
            stats["ambiguous"] += 1
    json.dump({f"{k:08x}": f"{v:08x}" for k, v in sorted(located.items())}, open(LOCATED, "w"), indent=0)
    print(dict(stats), f"-> {len(located)} located")
    shifts = Counter(v - k for k, v in located.items())
    print("most common shifts:", [(hex(d), c) for d, c in shifts.most_common(12)])


def sext16(v):
    return (v & 0xFFFF) - 0x10000 if v & 0x8000 else v & 0xFFFF


def cmd_symbols():
    """PAL address of each symbol the located sources reference, by vote."""
    objs = json.load(open(OBJECTS))
    located = {int(k, 16): int(v, 16) for k, v in json.load(open(LOCATED)).items()}
    text_addr, text = match.load_text()
    votes = defaultdict(Counter)
    for us, pa in located.items():
        o = objs[f"{us:08x}"]
        words = o["words"]
        pal = match.words_at(text_addr, text, pa, 4 * len(words))
        relocs = o["relocs"]
        for n, (i, rtype, sym, in_text) in enumerate(relocs):
            if in_text or sym.startswith("."):
                continue
            if rtype == R_MIPS_26:
                pc = pa + 4 * i
                t = ((pal[i] & 0x3FFFFFF) << 2) | (pc & 0xF0000000)
                votes[sym][t - ((words[i] & 0x3FFFFFF) << 2)] += 1
            elif rtype == R_MIPS_HI16:
                lo = next((r for r in relocs[n + 1:] if r[1] == R_MIPS_LO16 and r[2] == sym), None)
                if lo is None:
                    continue
                v = ((pal[i] & 0xFFFF) << 16) + sext16(pal[lo[0]])
                addend = ((words[i] & 0xFFFF) << 16) + sext16(words[lo[0]])
                votes[sym][(v - addend) & 0xFFFFFFFF] += 1
    amap, conflicts, unknown = {}, 0, 0
    for sym, c in votes.items():
        us = symbols.address_of(sym)
        if us is None:
            unknown += 1
            continue
        (best, nb), *rest = c.most_common()
        if rest and rest[0][1] * 4 > nb:  # no clear majority: leave it out
            conflicts += 1
            continue
        kind = symbols.kind_of(sym) or "func"
        prev = amap.get(us)
        if prev and prev[0] != best:
            conflicts += 1
            continue
        amap[us] = (best, kind)
    # The located functions themselves.
    for us, pa in located.items():
        amap.setdefault(us, (pa, "func"))
    json.dump({f"{k:08x}": [f"{v:08x}", kind] for k, (v, kind) in sorted(amap.items())}, open(ADDRMAP, "w"), indent=0)
    kinds = Counter(k for _, k in amap.values())
    print(f"{len(amap)} addresses mapped {dict(kinds)}; {conflicts} conflicting, {unknown} symbols without a US address")


def cmd_stats():
    amap = {int(k, 16): (int(v[0], 16), v[1]) for k, v in json.load(open(ADDRMAP)).items()}
    shifts = Counter((v - k, kind) for k, (v, kind) in amap.items())
    for (d, kind), c in shifts.most_common(25):
        print(f"{kind:5} {d:+#x}: {c}")


def full_map():
    """{US address: PAL address}: the measured map, plus function addresses between two measured
    neighbours that agree on the shift (the code between them moved as one block)."""
    amap = {int(k, 16): (int(v[0], 16), v[1]) for k, v in json.load(open(ADDRMAP)).items()}
    out = {k: v for k, (v, _) in amap.items()}
    funcs = sorted((k, v - k) for k, (v, kind) in amap.items() if kind == "func")
    keys = [k for k, _ in funcs]

    def guess(addr):
        if addr in out:
            return out[addr]
        j = bisect.bisect_left(keys, addr)
        if 0 < j < len(funcs) and funcs[j - 1][1] == funcs[j][1]:
            return addr + funcs[j][1]
        return None
    return out, guess


TOKEN = re.compile(r"(?<![0-9A-Za-z])(func|D|jtbl)_([0-9A-Fa-f]{8})(?![0-9A-Fa-f])")
HEX = re.compile(r"(?<![0-9A-Za-z_])0x(00[1-6][0-9A-Fa-f]{5})(?![0-9A-Fa-f])")
BARE = re.compile(r"(?m)^(00[1-6][0-9A-Fa-f]{5})(?=\s)")
TEXT_LO, TEXT_HI = 0x00100000, 0x00617A14


def _fmt(old, new):
    return f"{new:08X}" if old.upper() == old else f"{new:08x}"


def rewrite_text(text, guess, config=False):
    def tok(m):
        a = int(m[2], 16)
        n = guess(a) if m[1] == "func" or TEXT_LO <= a < TEXT_HI else a
        return f"{m[1]}_{_fmt(m[2], n)}" if n is not None else m[0]

    def hexlit(m):
        a = int(m[1], 16)
        n = guess(a) if TEXT_LO <= a < TEXT_HI else None
        return "0x" + _fmt(m[1], n) if n is not None else m[0]

    text = TOKEN.sub(tok, text)
    if config:
        text = HEX.sub(hexlit, text)
        text = BARE.sub(lambda m: _fmt(m[1], guess(int(m[1], 16)) or int(m[1], 16)), text)
    return text


def rewrite_json(v, guess):
    if isinstance(v, dict):
        return {rewrite_json(k, guess) if isinstance(k, str) else k: rewrite_json(x, guess) for k, x in v.items()}
    if isinstance(v, list):
        return [rewrite_json(x, guess) for x in v]
    if isinstance(v, int) and not isinstance(v, bool) and TEXT_LO <= v < TEXT_HI:
        return guess(v) or v
    if isinstance(v, str):
        return rewrite_text(v, guess, config=True)
    return v


def cmd_apply():
    _, guess = full_map()
    root = match.ROOT
    changed = renamed = 0
    for top in ("src", "include", "config"):
        for dirpath, _, files in os.walk(os.path.join(root, top)):
            for name in files:
                p = os.path.join(dirpath, name)
                old = open(p, encoding="utf-8", errors="surrogateescape").read()
                if name.endswith(".json"):
                    new = json.dumps(rewrite_json(json.loads(old), guess), indent=1) + "\n"
                    if json.loads(new) == json.loads(old):
                        new = old
                else:
                    new = rewrite_text(old, guess, config=top == "config")
                if new != old:
                    open(p, "w", encoding="utf-8", errors="surrogateescape", newline="").write(new)
                    changed += 1
    # Source files named after their address; two passes so a chain of renames never collides.
    moves = []
    for dirpath, _, files in os.walk(os.path.join(root, "src")):
        for name in files:
            m = re.fullmatch(r"func_([0-9A-Fa-f]{8})(\.\w+)", name)
            if m and (n := guess(int(m[1], 16))) is not None and n != int(m[1], 16):
                moves.append((os.path.join(dirpath, name), os.path.join(dirpath, f"func_{n:08X}{m[2]}")))
    for a, b in moves:
        os.rename(a, a + ".palport")
    for a, b in moves:
        os.rename(a + ".palport", b)
        renamed += 1
    print(f"{changed} files rewritten, {renamed} sources renamed")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cmd", choices=["objects", "locate", "symbols", "stats", "apply"])
    ap.add_argument("--jobs", type=int, default=4)
    a = ap.parse_args()
    if a.cmd == "objects":
        cmd_objects(a.jobs)
    elif a.cmd == "locate":
        cmd_locate()
    elif a.cmd == "symbols":
        cmd_symbols()
    elif a.cmd == "apply":
        cmd_apply()
    else:
        cmd_stats()


if __name__ == "__main__":
    main()
