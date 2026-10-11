typedef int s32;

struct Obj0035A458 {
    char pad0[0x10];
    s32 unk10;
};

extern "C" s32 func_0035A1E8(s32 arg0);

extern "C" s32 func_0035A5C0(struct Obj0035A458 *arg0) {
    return func_0035A1E8(arg0->unk10) != 0;
}
