typedef int s32;

extern "C" void func_002EA740(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

extern "C" s32 func_002EA8F8(s32 arg0, s32 arg1, s32 arg2) {
    s32 s0 = arg0;
    func_002EA740(s0, arg1, arg2, arg1 + 0x3C);
    return s0;
}
