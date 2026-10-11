extern "C" void func_002A0E48(void *arg0, void *arg1);
extern "C" void func_002CA8F0(void *arg0, void *arg1);

extern "C" void func_002CA8A8(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002A0E48(s0, &local);
    func_002CA8F0(s0, s1);
}
