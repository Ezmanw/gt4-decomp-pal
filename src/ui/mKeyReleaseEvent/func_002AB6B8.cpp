extern "C" void func_002A9738(void *arg0, void *arg1);
extern "C" void func_002AB700(void *arg0, void *arg1);

extern "C" void func_002AB6B8(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002A9738(s0, &local);
    func_002AB700(s0, s1);
}
