extern "C" void func_002315B8(void *arg0, void *arg1);
extern "C" void func_00231BA8(void *arg0, void *arg1);

extern "C" void func_00231D68(void *arg0) {
    void *s0 = arg0;
    int local;

    func_002315B8(&local, s0);
    func_00231BA8(s0, &local);
}
