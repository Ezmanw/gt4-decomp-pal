extern "C" void func_00319460(void *arg0, int arg1);
extern "C" void func_005C1628(void *arg0);

extern "C" void func_0031BA08(void *arg0, int arg1) {
    func_00319460(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
