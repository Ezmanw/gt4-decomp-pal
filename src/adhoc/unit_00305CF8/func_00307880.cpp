extern "C" void func_003245C8(void *arg0, int arg1);
extern "C" void func_005C1628(void *arg0);

extern "C" void func_00307880(void *arg0, int arg1) {
    func_003245C8(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
