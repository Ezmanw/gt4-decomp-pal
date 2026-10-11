extern "C" void func_00200A38(void *arg0, void *arg1);
extern "C" void func_0028F6E0(void *arg0, void *arg1);

extern "C" void func_0028F698(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_00200A38(s0, &local);
    func_0028F6E0(s0, s1);
}
