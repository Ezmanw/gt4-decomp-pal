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

struct Obj;

extern Rep D_00659FA8;

extern "C" void func_0013BD70(void *arg0, int arg1);
extern "C" void func_0013BDC8(void *arg0, void *arg1);
extern "C" Obj *func_00147D88(void *arg0);
extern "C" s32 func_004415C0(Obj *arg0);
extern "C" s32 func_00446410(s32 arg0);
extern "C" s32 func_00446168(s32 arg0);
extern "C" void func_0057DA20(char *arg0, const char *arg1, ...);
extern "C" void func_00312470(void *arg0, int arg1);
extern "C" void func_00314C78(void *arg0, void *arg1);
extern "C" void func_00328700(void *p);
extern "C" void func_00328750(void *p);
extern "C" char *func_005C2560(Rep *r);
extern "C" s32 func_0057F260(const char *s);
extern "C" void *func_005C2630(Str *s, s32 pos, s32 n, const char *src, s32 len);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);

static inline void str_release(Str *s) {
    Rep *q = (Rep *)(s->p - 0x10);
    if (--q->ref == 0) {
        s32 size = q->cap + 0x10;
        func_003268F0(q, size, 4, func_005C11A8()->name);
    }
}

extern "C" void MCarGarage__getCatWidth(void **arg0, void *arg1) {
    Handle h;
    Obj *o;
    s32 n;
    func_0013BDC8(&h, arg1);
    o = func_00147D88(h.p);
    func_0013BD70(&h, 2);
    n = func_00446410(func_004415C0(o));
    if (n == -1) {
        n = func_00446168(func_004415C0(o));
    }
    char buf[64] = "0";
    s32 spare[4];
    if (n != 0) {
        func_0057DA20(buf, "%d", n);
    }
    {
        Str s;
        Str *ps;
        Rep *r = &D_00659FA8;
        char *d;
        ps = &s;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
        func_005C2630(ps, 0, -1, buf, func_0057F260(buf));
        func_00314C78(&h, ps);
        if ((void *)arg0 != (void *)&h) {
            void *p = h.p;
            if (p != 0) {
                func_00328700(p);
            }
            if (*arg0 != 0) {
                func_00328750(*arg0);
            }
            *arg0 = p;
        }
        func_00312470(&h, 2);
        str_release(ps);
    }
}
