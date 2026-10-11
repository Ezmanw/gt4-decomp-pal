extern char D_00621880;

extern "C" void func_00486018(void *a0);
extern "C" void func_00486028(void *a0, int a1);

extern "C" void func_003AEE08(int arg0, int arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            func_00486018(&D_00621880);
        }
        if (arg0 == 0) {
            func_00486028(&D_00621880, 2);
        }
    }
}

extern "C" void func_00330A58(void) {
    func_003AEE08(1, 0xFFFF);
}

extern "C" void func_00330A68(void) {
    func_003AEE08(0, 0xFFFF);
}
