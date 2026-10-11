typedef int s32;

extern "C" void func_001C99E8(void *, s32, s32);
extern "C" void func_001C98B0(void *, s32, s32);

extern "C" void func_001C9870(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != 0) {
        func_001C99E8(arg0, arg2, arg3);
        return;
    }
    do {
        func_001C98B0(arg0, arg2, arg3);
    } while (0);
}
