extern char D_00621518;

extern "C" void func_0048F648(void *a0);
extern "C" void func_0048F688(void *a0, int a1);

extern "C" void func_003A2A10(int arg0, int arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_0048F648(&D_00621518);
        }
        if (arg0 == 0) {
            func_0048F688(&D_00621518, 2);
        }
    }
}

extern "C" void func_00330A58(void) {
    func_003A2A10(1, 0xFFFF);
}

extern "C" void func_00330A68(void) {
    func_003A2A10(0, 0xFFFF);
}
