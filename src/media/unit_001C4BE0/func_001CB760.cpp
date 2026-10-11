extern "C" void func_001CB7B8();
extern "C" void func_005C1628(void *arg0);

extern "C" void func_001CB760(void *arg0, int arg1) {
    func_001CB7B8();
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
