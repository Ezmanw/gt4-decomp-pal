typedef int s32;

struct Handle {
    void *p;
    char pad[0xC];
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

extern "C" void func_002AEAC0(void *arg0, int arg1);
extern "C" void func_002AEB18(void *arg0, void *arg1);
extern "C" s32 func_002B5450(void *a, s32 b);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FE3D0(void *arg0, bool arg1);
extern "C" void func_00328700(void *p);
extern "C" void func_00328750(void *p);

static inline s32 vcall(VObj *o) {
    VEntry *e = (VEntry *)((char *)o->vtbl + 0x58);
    return e->fn((char *)o + e->delta);
}

extern "C" void MListBox__getItemVisible(void **arg0, void *arg1, s32 arg2, VObj **arg3) {
    if (arg2 == 1) {
        Handle o;
        Handle h;
        Handle *ph;
        void *op;
        bool b;
        func_002AEB18(&o, arg1);
        op = o.p;
        b = func_002B5450(op, vcall(*arg3)) != 0;
        ph = &h;
        func_002FE3D0(ph, b);
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
        func_002FC9C8(ph, 2);
        func_002AEAC0(&o, 2);
    }
}
