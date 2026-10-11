extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mImageFace__structor_0(void *obj);
extern "C" void func_00284C40(void *arg0, void *arg1);

extern "C" void func_002A1278(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xF0, 4, "RefCounter");
    mImageFace__structor_0(s0);
    void *local = s0;
    func_00284C40(s1, &local);
}
