extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void hFloat__structor_0(void *obj, float arg1);
extern "C" void func_003094A0(void *arg0, void *arg1);

extern "C" void func_002F94B8(void *arg0, float fparg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x14, 4, "RefCounter");
    hFloat__structor_0(s0, fparg0);
    void *local = s0;
    func_003094A0(s1, &local);
}
