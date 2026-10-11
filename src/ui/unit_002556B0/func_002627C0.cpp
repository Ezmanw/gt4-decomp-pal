typedef int s32;

extern "C" void func_00262190(void *arg0);
extern "C" void func_00268048(void *arg0, void *arg1);

extern "C" void func_002627C0(void *arg0) {
    char buf[0x10];
    func_00262190(buf);
    func_00268048(arg0, buf);
}
