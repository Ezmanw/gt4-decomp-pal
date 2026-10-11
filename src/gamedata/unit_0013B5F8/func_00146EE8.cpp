extern "C" void func_002ED700(void *obj, int arg1);
extern "C" void hArrayCompare__structor_0(void *obj, const char *name, int arg2);
extern "C" void func_002ED718(int obj, int arg1);

extern "C" char D_00146B18[];

extern "C" void func_00146EE8(int arg0, int arg1) {
    char buf[0x10];
    int s1 = arg0;
    int s0 = arg1;
    func_002ED700(buf, s1);
    hArrayCompare__structor_0(buf, D_00146B18, s0);
    func_002ED718(s1, 2);
}
