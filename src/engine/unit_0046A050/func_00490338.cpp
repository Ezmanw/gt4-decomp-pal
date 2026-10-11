typedef int s32;

struct S0048FF60 {
    char pad0[8];
    s32 unk8;
};

extern "C" void func_004900E0(struct S0048FF60 *arg0, s32 arg1);

extern "C" void func_00490338(struct S0048FF60 *arg0) {
    func_004900E0(arg0, arg0->unk8 - 1);
}
