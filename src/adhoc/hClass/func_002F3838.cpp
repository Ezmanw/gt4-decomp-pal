extern "C" void func_00306748(int arg0, void *arg1);
extern "C" void func_0032DAF8(void *arg0, int arg1);
extern "C" void func_0032DE18(void *arg0);

extern "C" void func_002F3838(int arg0) {
    char buf[8];
    func_0032DE18(buf);
    func_00306748(arg0, buf);
    func_0032DAF8(buf, 2);
}
