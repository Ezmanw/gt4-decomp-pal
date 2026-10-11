extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mMemoryCardPlayList__structor_1(void *obj, void *arg1);
extern "C" void func_003094A0(void *arg0, void *arg1);

extern "C" void func_0017E5B0(void *arg0, void *arg1) {
    void *s2 = arg0;
    void *s1 = arg1;
    void *s0 = func_003268A8(0x1C, 4, "RefCounter");
    mMemoryCardPlayList__structor_1(s0, s1);
    void *local = s0;
    func_003094A0(s2, &local);
}
