extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mMagnifyActor__structor_0(void *obj);
extern "C" void func_001FEF60(void *arg0, void *arg1);

extern "C" void func_002BA2E0(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x38, 4, "RefCounter");
    mMagnifyActor__structor_0(s0);
    void *local = s0;
    func_001FEF60(s1, &local);
}
