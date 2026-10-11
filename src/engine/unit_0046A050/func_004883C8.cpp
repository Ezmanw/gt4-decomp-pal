typedef int s32;

extern "C" void func_00488340(void *arg0);
extern "C" void func_0048D8E8(void *arg0, void *arg1);

extern "C" void func_004883C8(void *arg0) {
    char buf[0x10];
    func_00488340(buf);
    func_0048D8E8(arg0, buf);
}
