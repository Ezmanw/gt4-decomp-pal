extern "C" void func_00463678(void *arg0, void *arg1);
extern "C" void SePlayer__Initialize(void *arg0, void *arg1, int arg2);

extern "C" void func_00392460(void *arg0, void *arg1) {
    void *s0 = arg0;
    int local;
    func_00463678(arg1, &local);
    SePlayer__Initialize(s0, &local, 0);
}
