extern "C" void func_002FB318(void *arg0, int arg1);
extern "C" void func_005C1628(void *arg0);

extern "C" void func_0031B788(void *arg0, int arg1) {
    func_002FB318(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
