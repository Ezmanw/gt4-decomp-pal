extern "C" void *func_003268A8(int size, int align, const char *name);
extern "C" void mSliderBar__structor_0(void *obj);
extern "C" void func_0028F610(void *arg0, void *arg1);

extern "C" void func_002DDAE0(void *arg0) {
    void *s1 = arg0;
    void *s0 = func_003268A8(0x110, 4, "RefCounter");
    mSliderBar__structor_0(s0);
    void *local = s0;
    func_0028F610(s1, &local);
}
