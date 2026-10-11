extern "C" void func_00306748(int arg0, void *arg1);
extern "C" void func_003118E8(void *arg0, int arg1);
extern "C" void func_00311CE8(void *arg0);

extern "C" void func_00306958(int arg0) {
    char buf[8];
    func_00311CE8(buf);
    func_00306748(arg0, buf);
    func_003118E8(buf, 2);
}
