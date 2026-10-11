extern "C" void func_00204DC0(void *arg0, void *arg1);
extern "C" void func_0027CF90(void *arg0, void *arg1);

extern "C" void func_0027CF48(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_00204DC0(s0, &local);
    func_0027CF90(s0, s1);
}
