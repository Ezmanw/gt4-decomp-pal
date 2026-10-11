typedef int s32;
typedef long long s64;

struct Struct_00449D58 {
    s64 unk0;
    s32 unk8;
    s32 unkC;
    void *unk10;
} __attribute__((aligned(8)));

struct List {
    s32 n;
    s32 pad4;
    char **items;
};

struct Ctx {
    char pad0[0x60];
    struct List *list;
    char pad64[0xC];
    void *p70;
};

struct Race {
    char pad0[0x6C];
    struct Ctx *ctx;
};

extern "C" s32 func_00445838(void *arg0);
extern "C" s32 func_00446658(void *arg0);
extern "C" s32 func_00446698(void *arg0);
extern "C" void func_00446C70(void *arg0, s32 arg1);
extern "C" s32 SPEC_DATABASE__RaceSpec__getCourseType(void *arg0);
extern "C" void func_0044A0D0(struct Struct_00449D58 *arg0);
extern "C" void func_0044A0F0(struct Struct_00449D58 *arg0, s32 arg1);
extern "C" s32 func_0044A188(struct Struct_00449D58 *arg0, s32 arg1);
extern "C" s32 func_0044A3C0(struct Struct_00449D58 *arg0, s32 arg1, s32 arg2);

extern "C" void RaceGTmode__changeEntryCarTire(struct Race *self) {
    struct Ctx *ctx = self->ctx;
    s32 r = SPEC_DATABASE__RaceSpec__getCourseType(ctx->p70);
    s32 mode;
    s32 i;
    s32 n;
    struct Struct_00449D58 t;

    if (r == 0) {
        return;
    }
    mode = -1;
    switch (r) {
    case 2:
        mode = 0xB;
        break;
    case 3:
        mode = 0xC;
        break;
    }
    if (mode == -1) {
        return;
    }
    n = ctx->list->n;
    func_0044A0D0(&t);
    for (i = 0; i < n; i++) {
        void *e = ctx->list->items[i] + 0x20;
        s32 a = func_00446658(e);
        s32 b = func_00446698(e);
        if (a != mode || b != mode) {
            if (func_0044A188(&t, func_00445838(e)) != 0) {
                s32 v = func_0044A3C0(&t, 0x19, mode);
                if (v != -1) {
                    func_00446C70(e, v);
                }
                s32 w = func_0044A3C0(&t, 0x1A, mode);
                if (w != -1) {
                    func_00446C70(e, w);
                }
            }
        }
    }
    func_0044A0F0(&t, 2);
}
