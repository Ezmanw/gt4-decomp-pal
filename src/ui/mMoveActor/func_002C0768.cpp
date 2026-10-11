extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mMoveActor__structor_0(void *obj);
extern "C" void func_001FEF60(void *arg0, void *arg1);

extern "C" void func_002C0768(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x64, 4, "RefCounter");
    mMoveActor__structor_0(s0);
    void *local = s0;
    func_001FEF60(s1, &local);
}
