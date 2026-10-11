extern "C" void func_001FC3B8(void *arg0, void *arg1);
extern "C" void func_0021CC70(void *arg0, void *arg1);

extern "C" void func_0021CC28(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_001FC3B8(s0, &local);
    func_0021CC70(s0, s1);
}
