extern "C" void func_00107BA0();
extern "C" void func_005C1628(void *arg0);

extern "C" void func_00107B08(void *arg0, int arg1) {
    func_00107BA0();
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
