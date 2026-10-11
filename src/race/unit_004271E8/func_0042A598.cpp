typedef int s32;

struct Obj {
    s32 unk0;
    void *data;
};

extern "C" s32 func_0042A438(Obj *self);

extern "C" s32 func_0042A598(Obj *self, s32 i) {
    if (self->data == 0) {
        return 0;
    }
    if (i < 0) {
        return 0;
    }
    return i < func_0042A438(self);
}
