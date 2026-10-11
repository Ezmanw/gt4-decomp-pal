extern "C" void func_002ED700(void *obj, int arg1);
extern "C" void func_005C5D18(void *obj, int arg1, void *arg2);
extern "C" void func_002ED718(int obj, int arg1);

extern "C" char D_00448BE0[];

extern "C" void func_00147500(int arg0, int arg1) {
    char buf[0x10];
    int s1 = arg0;
    int s0 = arg1;
    func_002ED700(buf, s1);
    func_005C5D18(buf, s0, D_00448BE0);
    func_002ED718(s1, 2);
}
