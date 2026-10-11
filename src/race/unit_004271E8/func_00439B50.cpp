extern "C" void func_0043A780(void *arg0, void *arg1);
extern "C" void func_005C1628(void *arg0);

extern void *D_00687D90;

extern "C" void func_00439B50(void *arg0, int arg1) {
    *(void **)arg0 = &D_00687D90;
    func_0043A780(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
