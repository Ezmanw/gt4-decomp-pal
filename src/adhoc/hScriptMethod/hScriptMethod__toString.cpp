typedef int s32;

struct Rep {
    s32 len;
    s32 cap;
    s32 ref;
    s32 sel;
};

struct S00659988 {
    const char *name;
};

struct Str {
    char *p;
};

struct SS {
    char *p;
    s32 pad[3];
};

extern char D_0069E0A8[];
extern char D_0069E0B8[];

extern "C" char *func_005C2560(Rep *r);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);
extern "C" void func_0032B718(SS *arg0);
extern "C" SS *func_0032B960(SS *arg0, const char *arg1);
extern "C" Str *func_0032BA18(SS *arg0);
extern "C" const char *hValue__getName(void *arg0);

extern "C" Str *hScriptMethod__toString(Str *ret, void *arg1) {
    SS ss;
    func_0032B718(&ss);
    func_0032B960(func_0032B960(func_0032B960(&ss, D_0069E0A8), hValue__getName(arg1)), D_0069E0B8);
    {
        s32 p = *(s32 *)&func_0032BA18(&ss)->p;
        Rep *r = (Rep *)(p - 0x10);
        s32 d = p;
        if (r->sel != 0) {
            d = (s32)func_005C2560(r);
        } else {
            r->ref++;
        }
        *(s32 *)&ret->p = d;
    }
    {
        Rep *q = (Rep *)(*(s32 *)&ss.p - 0x10);
        if (--q->ref == 0) {
            s32 cap = q->cap + 0x10;
            func_003268F0(q, cap, 4, func_005C11A8()->name);
        }
    }
    return ret;
}
