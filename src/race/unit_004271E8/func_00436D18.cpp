typedef int s32;

struct Obj {
    char pad[0x10D0];
    s32 unk10D0;
    s32 unk10D4;
};

extern "C" s32 func_00436CA8(s32 arg0, s32 arg1);

extern "C" s32 func_00436D18(struct Obj *arg0) {
    return func_00436CA8(arg0->unk10D4, arg0->unk10D0);
}
