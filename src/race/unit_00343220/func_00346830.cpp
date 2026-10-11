typedef int s32;

extern "C" s32 func_00346810(s32 arg0);

extern "C" s32 func_00346830(s32 arg0, s32 arg1) {
    return func_00346810(arg0) + (arg1 << 16);
}
