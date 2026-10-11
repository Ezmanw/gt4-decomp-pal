typedef int s32;

extern "C" void func_003042F8(s32 arg0, s32 arg1);

extern "C" s32 func_002EC4C8(s32 arg0, s32 arg1) {
    s32 s0 = arg0;
    func_003042F8(s0, arg1 + 0x38);
    return s0;
}
