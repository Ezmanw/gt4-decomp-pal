extern "C" void func_002404F0(void *arg0, void *arg1);
extern "C" void func_00242690(void *arg0, void *arg1);

extern "C" void func_00242648(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002404F0(s0, &local);
    func_00242690(s0, s1);
}
