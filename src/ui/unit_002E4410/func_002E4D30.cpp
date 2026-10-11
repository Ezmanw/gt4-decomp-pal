extern "C" void func_002D45F0(void *arg0, void *arg1);
extern "C" void func_002E4D78(void *arg0, void *arg1);

extern "C" void func_002E4D30(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002D45F0(s0, &local);
    func_002E4D78(s0, s1);
}
