typedef int s32;

struct S {
    char pad0[0x10];
    s32 unk10;
};

extern "C" void func_0023FBB0(struct S *arg0);
extern "C" void func_002C3CF8(s32 arg0);
extern "C" void func_00460F68(void);

extern "C" void func_0023F9E8(struct S *arg0) {
    struct S *s0 = arg0;
    func_0023FBB0(s0);
    func_002C3CF8(s0->unk10);
    func_00460F68();
}
