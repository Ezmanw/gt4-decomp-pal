extern "C" void func_00457878(void *arg0, void *arg1);
extern "C" void func_005C1628(void *arg0);

extern void *D_00688628;

extern "C" void func_006041E8(void *arg0, int arg1) {
    *(void **)arg0 = &D_00688628;
    func_00457878(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
