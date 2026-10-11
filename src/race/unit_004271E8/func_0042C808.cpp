typedef int s32;

struct Obj {
    char pad0[4];
    s32 unk4;
};

extern "C" s32 func_0042D948(s32 arg0, s32 arg1);

extern "C" s32 func_0042C808(Obj *arg0, s32 arg1, s32 arg2) {
    return func_0042D948(arg0->unk4 + (arg1 << 5), arg2);
}
