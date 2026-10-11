typedef int s32;

struct Obj {
    char pad[0x10];
    s32 unk10;
};

extern "C" s32 func_00437298(s32 arg0, s32 arg1, s32 arg2);
extern "C" s32 func_004389A0(s32 arg0, s32 arg1);

extern "C" s32 func_0018FD78(Obj *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 s0 = arg2;
    return func_004389A0(func_00437298(arg0->unk10, arg1, arg3), s0);
}
