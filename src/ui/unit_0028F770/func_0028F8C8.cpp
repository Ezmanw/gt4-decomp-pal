extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mFBox__structor_0(void *obj);
extern "C" void func_00200A38(void *arg0, void *arg1);

extern "C" void func_0028F8C8(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xC0, 4, "RefCounter");
    mFBox__structor_0(s0);
    void *local = s0;
    func_00200A38(s1, &local);
}
