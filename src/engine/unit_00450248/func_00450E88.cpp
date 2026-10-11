typedef int s32;

extern "C" void func_004587A8(s32 arg0);

extern "C" void func_00450E88(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
    func_004587A8(arg1);
}
