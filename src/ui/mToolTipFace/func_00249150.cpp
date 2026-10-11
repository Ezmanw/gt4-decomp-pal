extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mToolTipFace__structor_0(void *obj);
extern "C" void func_002551E0(void *arg0, void *arg1);

extern "C" void func_00249150(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x154, 4, "RefCounter");
    mToolTipFace__structor_0(s0);
    void *local = s0;
    func_002551E0(s1, &local);
}
