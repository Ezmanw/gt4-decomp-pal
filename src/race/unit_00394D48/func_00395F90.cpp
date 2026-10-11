typedef int s32;

struct Obj {
    char pad[0x10];
    s32 unk10;
};

extern void func_003C2468(s32);

extern "C" void func_00395F90(struct Obj *arg0) {
    s32 temp_v0 = arg0->unk10;
    if (temp_v0 != 0) {
        func_003C2468(temp_v0);
    }
}
