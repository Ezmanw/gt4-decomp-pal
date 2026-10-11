extern "C" void func_003094A0(void *arg0, void *arg1);
extern "C" void func_00124180(void *arg0, void *arg1);

extern "C" void func_00124138(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_003094A0(s0, &local);
    func_00124180(s0, s1);
}
