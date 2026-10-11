extern "C" void func_003094A0(void *arg0, void *arg1);
extern "C" void func_0013BE10(void *arg0, void *arg1);

extern "C" void func_0013BDC8(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_003094A0(s0, &local);
    func_0013BE10(s0, s1);
}
