extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mKeytopBox__structor_0(void *obj);
extern "C" void func_00204DC0(void *arg0, void *arg1);

extern "C" void func_002AD2D8(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xB4, 4, "RefCounter");
    mKeytopBox__structor_0(s0);
    void *local = s0;
    func_00204DC0(s1, &local);
}
