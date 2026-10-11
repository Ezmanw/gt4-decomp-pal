extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void hModuleVariable__structor_0(void *obj, void *arg1, void *arg2, void *arg3);
extern "C" void func_00324598(void *arg0, void *arg1);

extern "C" void func_00307EE8(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *s4 = arg0;
    void *s3 = arg1;
    void *s2 = arg2;
    void *s1 = arg3;
    void *s0 = func_003268A8(0x1C, 4, "RefCounter");
    hModuleVariable__structor_0(s0, s3, s2, s1);
    void *local = s0;
    func_00324598(s4, &local);
}
