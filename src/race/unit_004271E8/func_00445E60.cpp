typedef int s32;
typedef signed char s8;

struct Obj {
    char pad[0x18];
    s8 id;
};

extern "C" s32 func_00445EA0(Obj *, s32, s32);

extern "C" s32 func_00445E60(Obj *self, s32 arg1) {
    if (self->id == -1)
        return 0;
    return func_00445EA0(self, self->id, arg1);
}
