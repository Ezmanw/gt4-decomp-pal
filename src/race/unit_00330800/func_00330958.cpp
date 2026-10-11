extern char D_00620190;
extern char D_00620198;

extern "C" void func_00387E18(void *a0, void *a1);

extern "C" void func_00330958(int arg0, int arg1) {
    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        func_00387E18(&D_00620190, &D_00620198);
    }
}

extern "C" void func_00330998(void) {
    func_00330958(1, 0xFFFF);
}
