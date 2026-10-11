extern "C" void func_002D4620(void *arg0, int arg1);
extern "C" void func_005C1628(void *arg0);

extern "C" void func_002E4CD8(void *arg0, int arg1) {
    func_002D4620(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
