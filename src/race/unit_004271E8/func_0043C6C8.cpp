extern "C" void func_00438770(void *arg0, void *arg1);
extern "C" void func_005C1628(void *arg0);

extern void *D_006881A0;

struct func_0043C6C8_arg0 {
    char pad0[0xC];
    void *unkC;
};

extern "C" void func_0043C6C8(struct func_0043C6C8_arg0 *arg0, int arg1) {
    arg0->unkC = &D_006881A0;
    func_00438770(arg0, 0);
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
