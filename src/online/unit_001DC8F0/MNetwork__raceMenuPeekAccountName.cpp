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
    char pad[0xC];
};

struct Big {
    void *p;
    char pad[0x1C];
};

struct VEntry {
    short delta;
    short index;
    s32 (*fn)(void *);
};

struct VObj {
    char pad0[4];
    VEntry *vtbl;
};

extern Rep D_00659FA8;

extern "C" void func_001DC638(void *arg0, int arg1);
extern "C" void func_001DC690(void *arg0, void *arg1);
extern "C" void func_001F6BD0(void *a, s32 b, char *buf);
extern "C" char *func_005C2560(Rep *r);
extern "C" s32 func_0057F260(const char *s);
extern "C" void *func_005C2630(Str *s, s32 pos, s32 n, const char *src, s32 len);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);
extern "C" void func_00312470(void *arg0, int arg1);
extern "C" void func_00314C78(void *arg0, void *arg1);
extern "C" void func_00328700(void *p);
extern "C" void func_00328750(void *p);

static inline s32 vcall(VObj *o) {
    VEntry *e = (VEntry *)((char *)o->vtbl + 0x58);
    return e->fn((char *)o + e->delta);
}

extern "C" void MNetwork__raceMenuPeekAccountName(void **arg0, void *arg1, s32 arg2, VObj **arg3) {
    if (arg2 > 0) {
        char buf[0x80];
        Big h;
        Str s;
        Big *ph;
        Str *ps;
        const char *src;
        s32 v = vcall(*arg3);
        ph = &h;
        func_001DC690(ph, arg1);
        func_001F6BD0(ph->p, v, buf);
        func_001DC638(ph, 2);
        {
            Rep *r = &D_00659FA8;
            char *d;
            ps = &s;
            src = buf;
            if (r->sel != 0) {
                d = func_005C2560(r);
            } else {
                d = (char *)(r + 1);
                r->ref++;
            }
            ps->p = d;
        }
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        func_00314C78(ph, ps);
        if ((void *)arg0 != (void *)ph) {
            void *p = ph->p;
            if (p != 0) {
                func_00328700(p);
            }
            if (*arg0 != 0) {
                func_00328750(*arg0);
            }
            *arg0 = p;
        }
        func_00312470(ph, 2);
        {
            Rep *q = (Rep *)(ps->p - 0x10);
            if (--q->ref == 0) {
                s32 size = q->cap + 0x10;
                func_003268F0(q, size, 4, func_005C11A8()->name);
            }
        }
    }
}
