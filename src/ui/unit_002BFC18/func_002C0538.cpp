extern "C" void func_001FEF60(void *arg0, void *arg1);
extern "C" void func_002C0580(void *arg0, void *arg1);

extern "C" void func_002C0538(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_001FEF60(s0, &local);
    func_002C0580(s0, s1);
}
