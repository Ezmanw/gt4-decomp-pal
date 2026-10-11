typedef int s32;

extern "C" void func_00370160(void);
extern "C" void func_003701A8(void);

extern "C" void func_003701C0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        return func_00370160();
    }
    return func_003701A8();
}
