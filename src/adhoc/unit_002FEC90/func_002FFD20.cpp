typedef unsigned char u8;
typedef signed char s8;

extern "C" void func_002FFC48(void *arg0, u8 arg1);

extern "C" void *func_002FFD20(void *arg0, u8 arg1) {
    void *s0 = arg0;

    func_002FFC48(arg0, arg1);
    return s0;
}
