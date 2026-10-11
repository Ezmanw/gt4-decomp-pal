typedef int s32;

struct Handle {
    void *p;
    char pad[0xC];
};

struct Dest {
    s32 w[8];
};

extern "C" void func_0013BD70(void *arg0, int arg1);
extern "C" void func_0013BDC8(void *arg0, void *arg1);
extern "C" void *func_00147D88(void *arg0);
extern "C" void *func_004415C0(void *arg0);
extern "C" void *func_00445838(void *arg0);
extern "C" int func_00448B98(void *arg0, Dest *dest);
extern "C" s32 func_00448CF8(Dest *arg0);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FE3D0(void *arg0, int arg1);
extern "C" void func_00328700(void *p);
extern "C" void func_00328750(void *p);

static inline void assign(void **dst, Handle *ph) {
    if ((void *)dst != (void *)ph) {
        void *p = ph->p;
        if (p != 0) {
            func_00328700(p);
        }
        if (*dst != 0) {
            func_00328750(*dst);
        }
        *dst = p;
    }
}

extern "C" void MCarGarage__isChangeWheelDisabled(void **arg0, void *arg1) {
    Handle h0;
    Dest d;
    Handle h;
    func_0013BDC8(&h0, arg1);
    if (func_00448B98(func_00445838(func_004415C0(func_00147D88(h0.p))), &d) != 0) {
        s32 v = func_00448CF8(&d);
        Handle *ph = &h;
        func_002FE3D0(ph, v != 0);
        assign(arg0, ph);
        func_002FC9C8(ph, 2);
    } else {
        Handle *ph = &h;
        func_002FE3D0(ph, 0);
        assign(arg0, ph);
        func_002FC9C8(ph, 2);
    }
    func_0013BD70(&h0, 2);
}
