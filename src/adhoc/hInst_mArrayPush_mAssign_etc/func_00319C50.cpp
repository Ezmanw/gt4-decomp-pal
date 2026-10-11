extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mAssign__structor_0(void *obj);
extern "C" void *func_002FB2E8(void *arg0, void *arg1);

extern "C" void *func_00319C50(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x8, 4, "RefCounter");
    mAssign__structor_0(s0);
    void *local = s0;
    return func_002FB2E8(s1, &local);
}
