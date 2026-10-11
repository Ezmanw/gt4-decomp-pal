typedef int s32;

extern "C" void func_003094B8(s32 arg0, s32 arg1);

extern "C" s32 func_005D0810(s32 arg0, s32 arg1) {
    s32 s0 = arg0;
    func_003094B8(s0, arg1 + 0xA8);
    return s0;
}
