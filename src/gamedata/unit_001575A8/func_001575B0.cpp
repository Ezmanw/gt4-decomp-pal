extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mCarModelPS2__structor_0(void *obj);
extern "C" void func_00151808(void *arg0, void *arg1);

extern "C" void func_001575B0(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xA60, 4, "RefCounter");
    mCarModelPS2__structor_0(s0);
    void *local = s0;
    func_00151808(s1, &local);
}
