extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mVBox__structor_0(void *obj);
extern "C" void func_002E9240(void *arg0, void *arg1);

extern "C" void func_002E6F40(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0xD0, 4, "RefCounter");
    mVBox__structor_0(s0);
    void *local = s0;
    func_002E9240(s1, &local);
}
