extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mGraphFace__structor_0(void *obj);
extern "C" void func_00284C40(void *arg0, void *arg1);

extern "C" void func_0029EC10(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x8C4, 4, "RefCounter");
    mGraphFace__structor_0(s0);
    void *local = s0;
    func_00284C40(s1, &local);
}
