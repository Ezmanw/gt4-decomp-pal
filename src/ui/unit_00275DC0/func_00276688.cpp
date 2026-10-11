extern "C" void func_00240520(void *arg0, int arg1);
extern "C" void func_005C1628(void *arg0);

extern "C" void func_00276688(void *arg0, int arg1) {
    func_00240520(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
