extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mGameStats__structor_1(void *obj);
extern "C" void func_003094A0(void *arg0, void *arg1);

extern "C" void func_0016C280(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x110, 4, "RefCounter");
    mGameStats__structor_1(s0);
    void *local = s0;
    func_003094A0(s1, &local);
}
