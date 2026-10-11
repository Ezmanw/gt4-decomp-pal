typedef int s32;

extern "C" void func_003B12C8(s32 arg0, s32 arg1);

extern "C" void func_003B1F90(s32 arg0, s32 *arg1) {
    func_003B12C8(arg0, *arg1);
}
