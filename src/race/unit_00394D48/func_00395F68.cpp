typedef int s32;

struct Obj {
    char pad[0x8];
    s32 unk8;
};

extern void func_003E78F8(s32);

extern "C" void func_00395F68(struct Obj *arg0) {
    s32 temp_v0 = arg0->unk8;
    if (temp_v0 != 0) {
        func_003E78F8(temp_v0);
    }
}
