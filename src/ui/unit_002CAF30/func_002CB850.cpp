extern "C" void func_003094A0(void *arg0, void *arg1);
extern "C" void func_002CB898(void *arg0, void *arg1);

extern "C" void func_002CB850(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_003094A0(s0, &local);
    func_002CB898(s0, s1);
}
