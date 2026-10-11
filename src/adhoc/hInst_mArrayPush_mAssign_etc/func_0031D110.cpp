extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mListAssign__structor_0(void *obj, void *arg1);
extern "C" void *func_00319448(void *arg0, void *arg1);

extern "C" void *func_0031D110(void *arg0, void *arg1) {
    void *s2 = arg0;
    void *s1 = arg1;
    void *s0 = func_003268A8(0xC, 4, "RefCounter");
    mListAssign__structor_0(s0, s1);
    void *local = s0;
    return func_00319448(s2, &local);
}
