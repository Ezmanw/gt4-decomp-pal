extern "C" void func_002541E0(void *arg0, void *arg1);
extern "C" void func_002CE6E0(void *arg0, void *arg1);

extern "C" void func_002CE698(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002541E0(s0, &local);
    func_002CE6E0(s0, s1);
}
