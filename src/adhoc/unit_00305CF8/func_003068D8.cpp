extern "C" void func_00306748(int arg0, void *arg1);
extern "C" void func_0032D068(void *arg0, int arg1);
extern "C" void func_0032D370(void *arg0);

extern "C" void func_003068D8(int arg0) {
    char buf[8];
    func_0032D370(buf);
    func_00306748(arg0, buf);
    func_0032D068(buf, 2);
}
