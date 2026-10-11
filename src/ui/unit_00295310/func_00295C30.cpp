extern "C" void func_002A0E48(void *arg0, void *arg1);
extern "C" void func_00295C78(void *arg0, void *arg1);

extern "C" void func_00295C30(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002A0E48(s0, &local);
    func_00295C78(s0, s1);
}
