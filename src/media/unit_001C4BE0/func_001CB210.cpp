extern "C" void func_001CB268();
extern "C" void func_005C1628(void *arg0);

extern "C" void func_001CB210(void *arg0, int arg1) {
    func_001CB268();
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
