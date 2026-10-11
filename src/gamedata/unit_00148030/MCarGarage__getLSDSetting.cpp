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
int func_0043F408(void *ctx);
int func_0043F430(void *ctx);
int func_0043F458(void *ctx);
int func_0043F480(void *ctx);
int func_0043F4A8(void *ctx);
int func_0043F4D0(void *ctx);
void func_002FE3D0(void *, s32);
void func_00328700(s32);
void func_00328750(s32);
void func_002FC9C8(void *, s32);
}

extern "C" void MCarGarage__getLSDSetting(s32 *ret, int a1, int a2, VObj **args) {
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
        r = func_0043F408(ctx);
        break;
    case 1:
        r = func_0043F430(ctx);
        break;
    case 2:
        r = func_0043F458(ctx);
        break;
    case 3:
        r = func_0043F480(ctx);
        break;
    case 4:
        r = func_0043F4A8(ctx);
        break;
    case 5:
        r = func_0043F4D0(ctx);
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
