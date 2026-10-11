extern "C" void func_003094A0(void *arg0, void *arg1);
extern "C" void func_00318730(void *arg0, void *arg1);

extern "C" void func_003186E8(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_003094A0(s0, &local);
    func_00318730(s0, s1);
}
