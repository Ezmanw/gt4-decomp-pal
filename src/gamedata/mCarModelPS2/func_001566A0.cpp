typedef int s32;

struct S00105708 {
    s32 unk0;
    s32 unk4;
};

extern "C" void func_00156770(s32 arg0, s32 arg1);

extern "C" void func_001566A0(struct S00105708 *arg0) {
    func_00156770(arg0->unk0, arg0->unk4);
}
