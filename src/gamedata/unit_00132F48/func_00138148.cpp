extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mCarFace__structor_0(void *obj);
extern "C" void func_002551E0(void *arg0, void *arg1);

extern "C" void func_00138148(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x2BC, 4, "RefCounter");
    mCarFace__structor_0(s0);
    void *local = s0;
    func_002551E0(s1, &local);
}
