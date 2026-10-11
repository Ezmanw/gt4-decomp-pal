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
int func_0043F138(void *ctx);
int func_0043F160(void *ctx);
int func_0043F188(void *ctx);
int func_0043F1B0(void *ctx);
int func_0043F1D8(void *ctx);
int func_0043F200(void *ctx);
int func_0043F228(void *ctx);
int func_0043F250(void *ctx);
int func_0043F278(void *ctx);
int func_0043F2A0(void *ctx);
int func_0043F2C8(void *ctx);
int func_0043F2F0(void *ctx);
int func_0043F318(void *ctx);
int func_0043F340(void *ctx);
int func_0043F368(void *ctx);
int func_0043F390(void *ctx);
int func_0043F3B8(void *ctx);
int func_0043F3E0(void *ctx);
void func_002FE3D0(void *, s32);
void func_00328700(s32);
void func_00328750(s32);
void func_002FC9C8(void *, s32);
}

extern "C" void MCarGarage__getSuspensionSetting(s32 *ret, int a1, int a2, VObj **args) {
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
        r = func_0043F138(ctx);
        break;
    case 1:
        r = func_0043F160(ctx);
        break;
    case 2:
        r = func_0043F188(ctx);
        break;
    case 3:
        r = func_0043F1B0(ctx);
        break;
    case 4:
        r = func_0043F1D8(ctx);
        break;
    case 5:
        r = func_0043F200(ctx);
        break;
    case 6:
        r = func_0043F228(ctx);
        break;
    case 7:
        r = func_0043F250(ctx);
        break;
    case 8:
        r = func_0043F278(ctx);
        break;
    case 9:
        r = func_0043F2A0(ctx);
        break;
    case 10:
        r = func_0043F2C8(ctx);
        break;
    case 11:
        r = func_0043F2F0(ctx);
        break;
    case 12:
        r = func_0043F318(ctx);
        break;
    case 13:
        r = func_0043F340(ctx);
        break;
    case 14:
        r = func_0043F368(ctx);
        break;
    case 15:
        r = func_0043F390(ctx);
        break;
    case 16:
        r = func_0043F3B8(ctx);
        break;
    case 17:
        r = func_0043F3E0(ctx);
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
