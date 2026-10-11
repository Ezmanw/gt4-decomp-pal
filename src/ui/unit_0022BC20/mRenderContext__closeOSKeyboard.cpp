typedef int s32;

struct S {
    char pad[0x1D58];
    s32 unk1D58;
};

extern "C" void func_002C6268(s32 arg0);

extern "C" void mRenderContext__closeOSKeyboard(S *arg0) {
    func_002C6268(arg0->unk1D58);
}
