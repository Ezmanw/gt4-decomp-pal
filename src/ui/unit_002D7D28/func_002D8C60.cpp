extern "C" void func_002D45F0(void *arg0, void *arg1);
extern "C" void func_002D8CA8(void *arg0, void *arg1);

extern "C" void func_002D8C60(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_002D45F0(s0, &local);
    func_002D8CA8(s0, s1);
}
