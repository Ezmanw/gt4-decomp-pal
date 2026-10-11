typedef int s32;

extern "C" void func_00370270(void);
extern "C" void func_003702C0(void);

extern "C" void func_003702F8(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        return func_00370270();
    }
    return func_003702C0();
}
