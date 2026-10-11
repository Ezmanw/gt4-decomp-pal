extern "C" void func_00303A38(void *arg0, int arg1);
extern "C" void func_005C1628(void *arg0);

extern "C" void func_0032DAF8(void *arg0, int arg1) {
    func_00303A38(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
