struct Obj {
    char pad0[0x64];
    int dirty;
    char pad68[0x98 - 0x68];
    int hidden;
};

extern "C" void func_00476060(void *ctx, Obj *obj);
extern "C" void func_00476070(void *ctx, Obj *obj);

extern "C" void func_004856D0(Obj *self, void *ctx) {
    if (self->hidden == 0) {
        func_00476060(ctx, self);
        if (self->dirty)
            func_00476070(ctx, self);
    }
}
