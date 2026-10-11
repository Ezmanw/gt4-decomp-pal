extern char D_00621B08;
extern char D_00621B10;

extern "C" void func_00387E18(void *a0, void *a1);

extern "C" void func_003BE470(int arg0, int arg1) {
    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        func_00387E18(&D_00621B08, &D_00621B10);
    }
}

extern "C" void func_00330998(void) {
    func_003BE470(1, 0xFFFF);
}
