extern "C" void func_00284C70(void *arg0, int arg1);
extern "C" void func_005C1628(void *arg0);

extern "C" void func_0029E948(void *arg0, int arg1) {
    func_00284C70(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
