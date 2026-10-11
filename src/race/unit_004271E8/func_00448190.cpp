typedef int s32;

extern "C" void func_004481B0(s32 arg0, void *arg1);

extern "C" void func_00448190(s32 arg0) {
    char local[0x10];
    func_004481B0(arg0, &local);
}
