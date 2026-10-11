typedef int s32;

extern "C" void func_00262190(void *arg0);
extern "C" void func_00268300(void *arg0, void *arg1);

extern "C" void func_00262788(void *arg0) {
    char buf[0x10];
    func_00262190(buf);
    func_00268300(arg0, buf);
}
