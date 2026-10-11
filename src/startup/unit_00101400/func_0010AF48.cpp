extern int D_00618318;
extern "C" void func_0010ACD0(int);
extern "C" void func_00578B10(int);

extern "C" void func_0010AF48(int ms) {
    if (D_00618318 != 0) {
        func_0010ACD0(D_00618318);
        if (ms != 0)
            func_00578B10(ms * 1000);
    }
}
