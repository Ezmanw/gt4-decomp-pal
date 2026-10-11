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

struct Handle {
    void *p;
    char pad[0xC];
};

extern "C" void func_00137D68(void *arg0, int arg1);
extern "C" void func_00137DC0(void *arg0, void *arg1);
extern "C" void func_0013A378(Str *ret, void *arg1);
extern "C" void func_00312470(void *arg0, int arg1);
extern "C" void func_00314C78(void *arg0, void *arg1);
extern "C" void func_00328700(void *p);
extern "C" void func_00328750(void *p);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);

static inline void str_release(Str *s) {
    Rep *q = (Rep *)(s->p - 0x10);
    if (--q->ref == 0) {
        s32 size = q->cap + 0x10;
        func_003268F0(q, size, 4, func_005C11A8()->name);
    }
}

extern "C" void MCarFace__getImagePath(void **arg0, void *arg1) {
    Handle o;
    Handle h;
    Str s;
    Str *ps;
    Handle *ph;

    func_00137DC0(&o, arg1);
    ps = &s;
    func_0013A378(ps, o.p);
    ph = &h;
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
    str_release(ps);
    func_00137D68(&o, 2);
}
