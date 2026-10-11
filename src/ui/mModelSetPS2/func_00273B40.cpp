extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mModelSetPS2__structor_0(void *obj);
extern "C" void func_0021B660(void *arg0, void *arg1);

extern "C" void func_00273B40(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x10, 4, "RefCounter");
    mModelSetPS2__structor_0(s0);
    void *local = s0;
    func_0021B660(s1, &local);
}
