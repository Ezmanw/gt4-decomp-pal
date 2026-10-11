extern "C" int func_002DB288(int arg1);
extern "C" void func_002551E0(int arg0, int *arg1);

extern "C" int func_002DB578(int arg0, int arg1) {
    int local1;
    int local2;
    int v0 = func_002DB288(arg1);
    if (v0 != 0) {
        local1 = v0;
        func_002551E0(arg0, &local1);
    } else {
        local2 = 0;
        func_002551E0(arg0, &local2);
    }
    return arg0;
}
