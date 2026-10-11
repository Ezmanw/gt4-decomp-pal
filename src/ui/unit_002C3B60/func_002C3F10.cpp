typedef int s32;

struct Obj {
    char pad0[0x14];
    s32 unk14;
};

extern "C" void func_00460E00(s32 arg0);

extern "C" void func_002C3F10(struct Obj *arg0) {
    struct Obj *s0 = arg0;
    s32 temp_v0 = s0->unk14;

    if (temp_v0 != 0) {
        func_00460E00(temp_v0);
        s0->unk14 = 0;
    }
}
