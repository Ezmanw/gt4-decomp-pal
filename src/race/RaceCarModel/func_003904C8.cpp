typedef int s32;

extern "C" void func_004547E8(s32 arg0);

extern "C" void func_003904C8(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        return func_004547E8(arg1);
    }
}
