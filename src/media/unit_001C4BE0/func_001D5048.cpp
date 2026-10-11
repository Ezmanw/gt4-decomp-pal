extern "C" void func_001D5168();
extern "C" void func_005C1628(void *arg0);

extern "C" void func_001D5048(void *arg0, int arg1) {
    func_001D5168();
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
