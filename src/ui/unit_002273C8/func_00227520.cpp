extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mPipe__structor_0(void *obj);
extern "C" void func_003094A0(void *arg0, void *arg1);

extern "C" void func_00227520(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x150, 4, "RefCounter");
    mPipe__structor_0(s0);
    void *local = s0;
    func_003094A0(s1, &local);
}
