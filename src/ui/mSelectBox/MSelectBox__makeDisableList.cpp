typedef int s32;

extern "C" void func_002D8C60(s32 *arg0);
extern "C" void func_002F9CE8(s32 *arg0, s32 arg1);
extern "C" void func_002DC2D0(s32 arg0, s32 *arg1);
extern "C" void func_002F9C90(s32 *arg0, s32 arg1);
extern "C" void func_002D8C08(s32 *arg0, s32 arg1);

extern "C" void MSelectBox__makeDisableList(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 > 0) {
        s32 buf0[4];
        s32 buf1[4];

        func_002D8C60(buf0);
        func_002F9CE8(buf1, arg3);
        func_002DC2D0(buf0[0], buf1);
        func_002F9C90(buf1, 2);
        func_002D8C08(buf0, 2);
    }
}
