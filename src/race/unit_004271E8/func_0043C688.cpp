typedef int s32;

struct Obj {
    char pad0[0xC];
    void *vtbl;
};

extern char D_006233D8[];
extern char D_006881A0[];

extern "C" void *func_00438750(Obj *self, void *def);

extern "C" void *func_0043C688(Obj *self, void *def) {
    if (def == 0) {
        def = D_006233D8;
    }
    void *r = func_00438750(self, def);
    self->vtbl = D_006881A0;
    return r;
}
