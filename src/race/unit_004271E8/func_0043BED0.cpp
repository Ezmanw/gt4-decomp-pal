extern "C" void func_00438770(void *arg0, void *arg1);
extern "C" void func_005C1628(void *arg0);

extern void *D_00688210;

struct func_0043BED0_arg0 {
    char pad0[0xC];
    void *unkC;
};

extern "C" void func_0043BED0(struct func_0043BED0_arg0 *arg0, int arg1) {
    arg0->unkC = &D_00688210;
    func_00438770(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
