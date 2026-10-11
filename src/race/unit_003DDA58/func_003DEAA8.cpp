extern "C" void func_0044D308(void *arg0, void *arg1);
extern "C" void func_005C1628(void *arg0);

extern void *D_006831D8;

extern "C" void func_003DEAA8(void *arg0, int arg1) {
    *(void **)arg0 = &D_006831D8;
    func_0044D308(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
