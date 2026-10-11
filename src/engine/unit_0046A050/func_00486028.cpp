extern "C" void func_004862C0();
extern "C" void func_005C1628(void *arg0);

extern "C" void func_00486028(void *arg0, int arg1) {
    func_004862C0();
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
