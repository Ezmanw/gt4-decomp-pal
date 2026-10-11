extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mPlayerStats__structor_1(void *obj);
extern "C" void func_003094A0(void *arg0, void *arg1);

extern "C" void func_0019C4F8(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x110, 4, "RefCounter");
    mPlayerStats__structor_1(s0);
    void *local = s0;
    func_003094A0(s1, &local);
}
