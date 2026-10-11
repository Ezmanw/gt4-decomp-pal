typedef int s32;

extern "C" void func_003701E8(void);
extern "C" void func_00370228(void);

extern "C" void func_00370248(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        return func_003701E8();
    }
    return func_00370228();
}
