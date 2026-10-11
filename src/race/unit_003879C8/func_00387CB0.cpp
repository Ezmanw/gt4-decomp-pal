extern char D_006212F8;
extern char D_00621300;

extern "C" void func_00387E18(void *a0, void *a1);

extern "C" void func_00387CB0(int arg0, int arg1) {
    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        func_00387E18(&D_006212F8, &D_00621300);
    }
}

extern "C" void func_00330998(void) {
    func_00387CB0(1, 0xFFFF);
}
