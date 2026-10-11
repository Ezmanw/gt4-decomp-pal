extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mFloatConst__structor_0(void *obj, float arg1);
extern "C" void func_002FB2E8(void *arg0, void *arg1);

extern "C" void func_0031B958(void *arg0, float fparg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xC, 4, "RefCounter");
    mFloatConst__structor_0(s0, fparg0);
    void *local = s0;
    func_002FB2E8(s1, &local);
}
