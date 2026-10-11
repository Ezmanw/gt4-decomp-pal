extern "C" void func_003042E0(void *arg0, void *arg1);
extern "C" void func_002552B0(void *arg0, void *arg1);

extern "C" void func_00255268(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_003042E0(s0, &local);
    func_002552B0(s0, s1);
}
