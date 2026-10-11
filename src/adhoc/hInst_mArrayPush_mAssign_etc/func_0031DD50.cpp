extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mMethodDefine__structor_0(void *obj, void *arg1, void *arg2);
extern "C" void func_00319430(void *arg0, void *arg1);

extern "C" void func_0031DD50(void *arg0, void *arg1, void *arg2) {
    void *s3 = arg0;
    void *s2 = arg1;
    void *s1 = arg2;
    void *s0 = func_003268A8(0x10, 4, "RefCounter");
    mMethodDefine__structor_0(s0, s2, s1);
    void *local = s0;
    func_00319430(s3, &local);
}
