extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mThrow__structor_0(void *obj);
extern "C" void *func_002FB300(void *arg0, void *arg1);

extern "C" void *func_00320168(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x8, 4, "RefCounter");
    mThrow__structor_0(s0);
    void *local = s0;
    return func_002FB300(s1, &local);
}
