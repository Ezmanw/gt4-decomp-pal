extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void hBuiltinMethod__structor_0(void *obj, void *arg1, void *arg2);
extern "C" void func_00303A08(void *arg0, void *arg1);

extern "C" void func_0032DE18(void *arg0, void *arg1, void *arg2) {
    void *s3 = arg0;
    void *s2 = arg1;
    void *s1 = arg2;
    void *s0 = func_003268A8(0x10, 4, "RefCounter");
    hBuiltinMethod__structor_0(s0, s2, s1);
    void *local = s0;
    func_00303A08(s3, &local);
}
