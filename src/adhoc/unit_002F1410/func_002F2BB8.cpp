extern "C" void func_003042E0(void *arg0, void *arg1);
extern "C" void func_002F2C00(void *arg0, void *arg1);

extern "C" void func_002F2BB8(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_003042E0(s0, &local);
    func_002F2C00(s0, s1);
}
