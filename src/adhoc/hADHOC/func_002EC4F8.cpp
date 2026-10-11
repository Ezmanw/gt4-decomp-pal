typedef int s32;

extern "C" void func_003042F8(s32 arg0, s32 arg1);

extern "C" s32 func_002EC4F8(s32 arg0, s32 arg1) {
    func_003042F8(arg0, arg1 + 0x3C);
    return arg0;
}
