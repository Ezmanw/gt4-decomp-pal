extern "C" void func_001FEF60(void *arg0, void *arg1);
extern "C" void func_0020B4A0(void *arg0, void *arg1);

extern "C" void func_0020B458(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_001FEF60(s0, &local);
    func_0020B4A0(s0, s1);
}
