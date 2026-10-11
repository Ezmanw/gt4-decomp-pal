extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mModelMotion__structor_0(void *obj);
extern "C" void func_0028BD30(void *arg0, void *arg1);

extern "C" void func_0021B540(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x24, 4, "RefCounter");
    mModelMotion__structor_0(s0);
    void *local = s0;
    func_0028BD30(s1, &local);
}
