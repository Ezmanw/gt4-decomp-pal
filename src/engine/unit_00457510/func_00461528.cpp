struct Buffers_00461150 {
    char pad0[0xC];
    void *mC;
    void *m10;
};

extern "C" Buffers_00461150 D_008468D0;
extern "C" void func_004614C0(void);
extern "C" void *func_00578CB0(int size);

extern "C" void func_00461528(void) {
    func_004614C0();

    if (D_008468D0.m10 == 0) {
        D_008468D0.m10 = func_00578CB0(0x19000);
    }
    if (D_008468D0.mC == 0) {
        D_008468D0.mC = func_00578CB0(0x2800);
    }
}
