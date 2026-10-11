extern "C" int func_00447F30(int a, int b);
extern "C" int func_00447FA0(int a);
extern "C" int func_00448EC0(int i, int b);

extern "C" int func_00448E48(int a, int b) {
    int i = func_00447F30(a, b);
    if (i == -1) {
        i = func_00447FA0(a);
        if (i == -1)
            return 0;
    }
    return func_00448EC0(i, b);
}
