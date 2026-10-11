typedef int s32;

extern "C" s32 SPEC_DATABASE__DatabaseStorage__getRow(void *arg0, s32 arg1, void *arg2);
extern "C" char *func_004441D8(void *arg0, s32 arg1);
extern "C" void func_005A609C(void *arg0, const char *arg1);
extern char D_006235A8[];

extern "C" void func_00447270(s32 arg0, void *arg1) {
    char buf[0x10];

    if (arg0 != -1 && SPEC_DATABASE__DatabaseStorage__getRow(D_006235A8, arg0, buf) != 0) {
        func_005A609C(arg1, func_004441D8(D_006235A8, arg0));
    }
}
