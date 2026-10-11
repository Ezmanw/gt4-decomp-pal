extern "C" void func_00306748(int arg0, void *arg1);
extern "C" void func_00310D48(void *arg0, int arg1);
extern "C" void func_00311148(void *arg0);

extern "C" void func_002F37F8(int arg0) {
    char buf[8];
    func_00311148(buf);
    func_00306748(arg0, buf);
    func_00310D48(buf, 2);
}
