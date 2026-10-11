typedef short s16;

struct VEntry {
    s16 delta;
    s16 index;
    void *(*fn)(void *self);
};

struct Target {
    char pad0[0x5C];
    VEntry *vtbl;
};

struct Obj {
    Target *target;
};

extern "C" void func_004848E8(void *ctx, void *arg);
extern "C" void func_00480E48(Target *target, void *arg);

extern "C" void func_0047BDE8(Obj *self, void *arg) {
    Target *t = self->target;
    VEntry *e = &t->vtbl[3];
    func_004848E8(e->fn((char *)t + e->delta), arg);
    func_00480E48(self->target, arg);
}
