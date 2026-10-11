typedef int s32;

extern "C" void func_002ED700(s32 arg0, s32 arg1);

extern "C" s32 func_002ECF78(s32 arg0, s32 arg1) {
    s32 s0 = arg0;
    func_002ED700(arg0, arg1 + 0x74);
    return s0;
}
