typedef int s32;

extern "C" void func_002293E0(s32 arg0, s32 arg1);

extern "C" s32 func_005DB2E0(s32 arg0, s32 arg1) {
    s32 s0 = arg0;
    func_002293E0(s0, arg1 + 0x1D04);
    return s0;
}
