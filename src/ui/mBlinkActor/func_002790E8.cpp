extern "C" void func_001FEF60(void *arg0, void *arg1);
extern "C" void func_00279130(void *arg0, void *arg1);

extern "C" void func_002790E8(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_001FEF60(s0, &local);
    func_00279130(s0, s1);
}
