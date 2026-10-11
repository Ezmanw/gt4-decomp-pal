extern "C" void func_003094A0(void *arg0, void *arg1);
extern "C" void func_0022AEC0(void *arg0, void *arg1);

extern "C" void func_0022AE78(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_003094A0(s0, &local);
    func_0022AEC0(s0, s1);
}
