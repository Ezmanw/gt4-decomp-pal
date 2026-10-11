extern char D_00622068;
extern char D_00622070;

extern "C" void func_00387E18(void *a0, void *a1);

extern "C" void func_003F1968(int arg0, int arg1) {
    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        func_00387E18(&D_00622068, &D_00622070);
    }
}

extern "C" void func_00330998(void) {
    func_003F1968(1, 0xFFFF);
}
