extern "C" void func_00378F20(void *arg0, void *arg1);
extern "C" void func_005C1628(void *arg0);

extern void *D_0067A758;

extern "C" void func_0037C140(void *arg0, int arg1) {
    *(void **)arg0 = &D_0067A758;
    func_00378F20(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
