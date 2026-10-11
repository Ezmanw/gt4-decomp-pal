extern "C" int func_0025C3F8(int arg0);
extern "C" int func_00265EF0(int arg0);
extern "C" void func_00266258(void);

extern "C" void func_002661F0(int arg0, int arg1) {
    int s0 = arg0;
    int s1 = arg1;
    func_00266258();
    if (func_00265EF0(s0) != 0) {
        if (func_0025C3F8(s0) != 0) {
            func_002661F0(func_0025C3F8(s0), s1);
        }
    }
}
