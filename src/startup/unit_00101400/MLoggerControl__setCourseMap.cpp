typedef int s32;

extern "C" void func_00123840(s32 *arg0);
extern "C" void func_001298D0(s32 *arg0, s32 arg1);
extern "C" void func_0011FFA0(s32 arg0, s32 *arg1);
extern "C" void func_00129878(s32 *arg0, s32 arg1);
extern "C" void func_001237E8(s32 *arg0, s32 arg1);

extern "C" void MLoggerControl__setCourseMap(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 > 0) {
        s32 buf0[4];
        s32 buf1[4];

        func_00123840(buf0);
        func_001298D0(buf1, arg3);
        func_0011FFA0(buf0[0], buf1);
        func_00129878(buf1, 2);
        func_001237E8(buf0, 2);
    }
}
