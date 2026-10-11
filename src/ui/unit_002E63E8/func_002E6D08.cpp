extern "C" void func_002E9240(void *arg0, void *arg1);
extern "C" void func_002E6D50(void *arg0, void *arg1);

extern "C" void func_002E6D08(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002E9240(s0, &local);
    func_002E6D50(s0, s1);
}
