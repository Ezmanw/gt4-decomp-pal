typedef int s32;

struct Obj {
    s32 unk0;
    char pad[0x80 - 4];
    s32 unk80;
};

extern "C" s32 func_00458C08(s32 arg0);

extern "C" s32 func_00450FA8(struct Obj *arg0) {
    arg0->unk80 = 1;
    return func_00458C08(arg0->unk0);
}
