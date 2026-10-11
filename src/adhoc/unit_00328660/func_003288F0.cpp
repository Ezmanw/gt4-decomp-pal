extern "C" void func_00328750(int arg0);
extern "C" void func_005C1628(void *arg0);

extern "C" void func_003288F0(int *arg0, int arg1) {
    int temp_v0 = *arg0;
    if (temp_v0 != 0) {
        func_00328750(temp_v0);
    }
    if (arg1 & 1) {
        return func_005C1628(arg0);
    }
}
