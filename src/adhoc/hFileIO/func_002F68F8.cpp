extern "C" void func_002FEBD8(void *arg0, void *arg1);
extern "C" void func_002F6940(void *arg0, void *arg1);

extern "C" void func_002F68F8(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002FEBD8(s0, &local);
    func_002F6940(s0, s1);
}
