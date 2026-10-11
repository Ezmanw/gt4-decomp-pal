extern char D_008463B0;

extern "C" void func_004AEC68(void *a0);
extern "C" void func_004AECA0(void *a0, int a1);

extern "C" void func_0044D198(int arg0, int arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_004AEC68(&D_008463B0);
        }
        if (arg0 == 0) {
            func_004AECA0(&D_008463B0, 2);
        }
    }
}

extern "C" void func_00330A58(void) {
    func_0044D198(1, 0xFFFF);
}

extern "C" void func_00330A68(void) {
    func_0044D198(0, 0xFFFF);
}
