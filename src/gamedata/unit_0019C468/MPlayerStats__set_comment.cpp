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

struct VEntry {
    short delta;
    short index;
    void (*fn)(Str *, void *);
};

struct Obj {
    char pad0[4];
    char *vtbl;
};

extern "C" void func_0019C1A8(void *arg0, int arg1);
extern "C" void func_0019C200(void *arg0, void *arg1);
extern "C" void func_0019DC70(s32 arg0, Str *arg1);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);

extern "C" void MPlayerStats__set_comment(void *arg0, void *arg1, void *arg2, Obj **arg3) {
    Str s;
    s32 buf[4];
    {
        Obj *o = *arg3;
        VEntry *e = (VEntry *)(o->vtbl + 0x18);
        e->fn(&s, (char *)o + e->delta);
    }
    s32 *pb = buf;
    func_0019C200(pb, arg1);
    func_0019DC70(*pb, &s);
    func_0019C1A8(pb, 2);
    {
        Rep *q = (Rep *)(s.p - 0x10);
        if (--q->ref == 0) {
            s32 cap = q->cap + 0x10;
            func_003268F0(q, cap, 4, func_005C11A8()->name);
        }
    }
}
