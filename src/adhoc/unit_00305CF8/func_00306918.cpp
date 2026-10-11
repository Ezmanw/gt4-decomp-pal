extern "C" void func_00306748(int arg0, void *arg1);
extern "C" void func_00310180(void *arg0, int arg1);
extern "C" void func_003105C0(void *arg0);

extern "C" void func_00306918(int arg0) {
    char buf[8];
    func_003105C0(buf);
    func_00306748(arg0, buf);
    func_00310180(buf, 2);
}
