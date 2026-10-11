extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mSelectBar__structor_0(void *obj);
extern "C" void func_002D45F0(void *arg0, void *arg1);

extern "C" void func_002D58E0(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xF8, 4, "RefCounter");
    mSelectBar__structor_0(s0);
    void *local = s0;
    func_002D45F0(s1, &local);
}
