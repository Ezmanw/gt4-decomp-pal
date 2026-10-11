extern "C" void func_002551E0(void *arg0, void *arg1);
extern "C" void func_0027BDC0(void *arg0, void *arg1);

extern "C" void func_0027BD78(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002551E0(s0, &local);
    func_0027BDC0(s0, s1);
}
