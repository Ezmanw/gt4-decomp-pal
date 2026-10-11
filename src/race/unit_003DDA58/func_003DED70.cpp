extern "C" void func_003DEAA8(void *arg0, void *arg1);
extern "C" void func_005C1628(void *arg0);

extern void *D_00683180;

extern "C" void func_003DED70(void *arg0, int arg1) {
    *(void **)arg0 = &D_00683180;
    func_003DEAA8(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
