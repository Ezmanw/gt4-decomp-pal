typedef int s32;

extern "C" void func_0030A8F0(void);

extern "C" s32 func_00308C98(s32 arg0, s32 arg1) {
    s32 s0 = arg0;

    if (s0 != arg1) {
        func_0030A8F0();
    }
    return s0;
}
