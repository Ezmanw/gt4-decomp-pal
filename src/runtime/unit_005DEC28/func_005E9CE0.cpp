typedef int s32;

extern "C" void func_003094B8(s32 arg0, s32 arg1);

extern "C" s32 func_005E9CE0(s32 arg0, s32 arg1) {
    s32 s0 = arg0;
    func_003094B8(s0, arg1 + 0xF0);
    return s0;
}
