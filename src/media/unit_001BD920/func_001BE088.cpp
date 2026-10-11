extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mEyetoyFacePS2__structor_0(void *obj);
extern "C" void func_002551E0(void *arg0, void *arg1);

extern "C" void func_001BE088(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xAC, 4, "RefCounter");
    mEyetoyFacePS2__structor_0(s0);
    void *local = s0;
    func_002551E0(s1, &local);
}
