extern char D_006201E8;
extern char D_006201F0;

extern "C" void func_00387E18(void *a0, void *a1);

extern "C" void func_00339A68(int arg0, int arg1) {
    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        func_00387E18(&D_006201E8, &D_006201F0);
    }
}

extern "C" void func_00330998(void) {
    func_00339A68(1, 0xFFFF);
}
