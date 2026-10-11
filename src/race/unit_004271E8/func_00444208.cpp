typedef int s32;

struct Obj {
    char pad[0x88];
    void *items[1];
};

extern "C" s32 func_00449E70(void *, s32);

extern "C" s32 func_00444208(Obj *self, s32 arg1, s32 idx) {
    void *p = self->items[idx];
    if (p == 0)
        return 0;
    return func_00449E70(p, arg1);
}
