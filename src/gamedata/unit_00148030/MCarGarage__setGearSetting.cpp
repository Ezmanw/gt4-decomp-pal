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
void func_0043E668(void *ctx, int i, int v);
void func_0043E698(void *ctx, int v);
void func_0043E6C0(void *ctx, int v);
void func_0043E6E8(void *ctx, int v);
}

extern "C" void MCarGarage__setGearSetting(int a0, int a1, int a2, VObj **args) {
    Handle h;
    func_0013BDC8(&h);
    void *ctx = func_00147D88(h.p);
    func_0013BD70(&h, 2);
    int v = vcall11(args[1]);
    switch (vcall11(args[0])) {
    case 0:
        func_0043E668(ctx, 0, v);
        break;
    case 1:
        func_0043E668(ctx, 1, v);
        break;
    case 2:
        func_0043E668(ctx, 2, v);
        break;
    case 3:
        func_0043E668(ctx, 3, v);
        break;
    case 4:
        func_0043E668(ctx, 4, v);
        break;
    case 5:
        func_0043E668(ctx, 5, v);
        break;
    case 6:
        func_0043E668(ctx, 6, v);
        break;
    case 7:
        func_0043E668(ctx, 7, v);
        break;
    case 8:
        func_0043E698(ctx, v);
        break;
    case 9:
        func_0043E6C0(ctx, v);
        break;
    case 10:
        func_0043E6E8(ctx, v);
        break;
    }
}
