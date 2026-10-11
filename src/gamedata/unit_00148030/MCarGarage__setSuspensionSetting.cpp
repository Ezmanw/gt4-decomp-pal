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
void func_0043E910(void *ctx, int);
void func_0043E938(void *ctx, int);
void func_0043E9A8(void *ctx, int);
void func_0043E9D0(void *ctx, int);
void func_0043EA40(void *ctx, int);
void func_0043EA68(void *ctx, int);
void func_0043EAD8(void *ctx, int);
void func_0043EB00(void *ctx, int);
void func_0043EB28(void *ctx, int);
void func_0043EB50(void *ctx, int);
void func_0043EB78(void *ctx, int);
void func_0043EBA0(void *ctx, int);
void func_0043EBC8(void *ctx, int);
void func_0043EBF0(void *ctx, int);
void func_0043EC18(void *ctx, int);
void func_0043EC40(void *ctx, int);
void func_0043EC68(void *ctx, int);
void func_0043EC90(void *ctx, int);
}

extern "C" void MCarGarage__setSuspensionSetting(int a0, int a1, int a2, VObj **args) {
    Handle h;
    func_0013BDC8(&h);
    void *ctx = func_00147D88(h.p);
    func_0013BD70(&h, 2);
    int v = vcall11(args[1]);
    switch (vcall11(args[0])) {
    case 0:
        func_0043E910(ctx, v);
        break;
    case 1:
        func_0043E938(ctx, v);
        break;
    case 2:
        func_0043E9A8(ctx, v);
        break;
    case 3:
        func_0043E9D0(ctx, v);
        break;
    case 4:
        func_0043EA40(ctx, v);
        break;
    case 5:
        func_0043EA68(ctx, v);
        break;
    case 6:
        func_0043EAD8(ctx, v);
        break;
    case 7:
        func_0043EB00(ctx, v);
        break;
    case 8:
        func_0043EB28(ctx, v);
        break;
    case 9:
        func_0043EB50(ctx, v);
        break;
    case 10:
        func_0043EB78(ctx, v);
        break;
    case 11:
        func_0043EBA0(ctx, v);
        break;
    case 12:
        func_0043EBC8(ctx, v);
        break;
    case 13:
        func_0043EBF0(ctx, v);
        break;
    case 14:
        func_0043EC18(ctx, v);
        break;
    case 15:
        func_0043EC40(ctx, v);
        break;
    case 16:
        func_0043EC68(ctx, v);
        break;
    case 17:
        func_0043EC90(ctx, v);
        break;
    }
}
