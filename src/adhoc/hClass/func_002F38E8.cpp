extern "C" void func_00306748(int arg0, void *arg1);
extern "C" void func_0032BB58(void *arg0, int arg1);
extern "C" void func_0032BE90(void *arg0);

extern "C" void func_002F38E8(int arg0) {
    char buf[8];
    func_0032BE90(buf);
    func_00306748(arg0, buf);
    func_0032BB58(buf, 2);
}
