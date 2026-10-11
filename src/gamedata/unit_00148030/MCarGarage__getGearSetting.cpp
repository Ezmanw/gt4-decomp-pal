typedef int s32;

struct VEntry {
    short delta;
    short index;
    int (*fn)(void *);
};

struct VObj {
    int pad;
    VEntry *vtbl;
};

static inline int vcall11(VObj *o) {
    VEntry *e = &o->vtbl[11];
    return e->fn((char *)o + e->delta);
}

struct Handle {
    void *p;
    int pad[3];
};

extern "C" {
void func_0013BDC8(Handle *h);
void func_0013BD70(Handle *h, int flags);
void *func_00147D88(void *p);
int func_0043EED8(void *ctx, int);
int func_0043EF08(void *ctx);
int func_0043EF30(void *ctx);
int func_0043EF58(void *ctx);
void func_002FE3D0(void *, s32);
void func_00328700(s32);
void func_00328750(s32);
void func_002FC9C8(void *, s32);
}

extern "C" void MCarGarage__getGearSetting(s32 *ret, int a1, int a2, VObj **args) {
    union {
        Handle h;
        s32 buf[4];
    } t;
    func_0013BDC8(&t.h);
    void *ctx = func_00147D88(t.h.p);
    func_0013BD70(&t.h, 2);
    int r;
    switch (vcall11(args[0])) {
    case 0:
        r = func_0043EED8(ctx, 0);
        break;
    case 1:
        r = func_0043EED8(ctx, 1);
        break;
    case 2:
        r = func_0043EED8(ctx, 2);
        break;
    case 3:
        r = func_0043EED8(ctx, 3);
        break;
    case 4:
        r = func_0043EED8(ctx, 4);
        break;
    case 5:
        r = func_0043EED8(ctx, 5);
        break;
    case 6:
        r = func_0043EED8(ctx, 6);
        break;
    case 7:
        r = func_0043EED8(ctx, 7);
        break;
    case 8:
        r = func_0043EF08(ctx);
        break;
    case 9:
        r = func_0043EF30(ctx);
        break;
    case 10:
        r = func_0043EF58(ctx);
        break;
    default:
        r = -1;
        break;
    }
    func_002FE3D0(t.buf, r);
    if (ret != t.buf) {
        s32 newVal = t.buf[0];
        if (newVal != 0)
            func_00328700(newVal);
        s32 oldVal = *ret;
        if (oldVal != 0)
            func_00328750(oldVal);
        *ret = newVal;
    }
    func_002FC9C8(t.buf, 2);
}
