extern "C" void func_002551E0(void *arg0, void *arg1);
extern "C" void func_001BC6C0(void *arg0, void *arg1);

extern "C" void func_001BC678(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002551E0(s0, &local);
    func_001BC6C0(s0, s1);
}
