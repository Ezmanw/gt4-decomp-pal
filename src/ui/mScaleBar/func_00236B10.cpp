extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mScaleBar__structor_0(void *obj);
extern "C" void func_0028F610(void *arg0, void *arg1);

extern "C" void func_00236B10(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x108, 4, "RefCounter");
    mScaleBar__structor_0(s0);
    void *local = s0;
    func_0028F610(s1, &local);
}
