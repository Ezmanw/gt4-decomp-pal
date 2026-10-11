extern "C" void func_00284C40(void *arg0, void *arg1);
extern "C" void func_002A0F18(void *arg0, void *arg1);

extern "C" void func_002A0ED0(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_00284C40(s0, &local);
    func_002A0F18(s0, s1);
}
