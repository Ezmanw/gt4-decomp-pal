extern "C" void func_002551E0(void *arg0, int *arg1);
extern "C" void func_001B9150(void *arg0, int arg1);

extern "C" void func_001B9108(void *arg0, int arg1) {
    void *s0 = arg0;
    int s1 = arg1;
    int local = 0;
    func_002551E0(s0, &local);
    func_001B9150(s0, s1);
}
