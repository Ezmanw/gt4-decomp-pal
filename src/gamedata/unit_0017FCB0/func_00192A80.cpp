extern "C" void func_00200A38(void *arg0, void *arg1);
extern "C" void func_00192AC8(void *arg0, void *arg1);

extern "C" void func_00192A80(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int local = 0;
    func_00200A38(s0, &local);
    func_00192AC8(s0, s1);
}
