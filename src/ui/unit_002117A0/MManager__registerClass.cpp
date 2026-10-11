typedef int s32;

extern "C" void func_00211520(s32 *arg0);
extern "C" void func_002F2BB8(s32 *arg0, s32 arg1);
extern "C" void func_002128A8(s32 arg0, s32 *arg1);
extern "C" void func_002F2B60(s32 *arg0, s32 arg1);
extern "C" void func_002114C8(s32 *arg0, s32 arg1);

extern "C" void MManager__registerClass(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 == 1) {
        s32 buf0[4];
        s32 buf1[4];

        func_00211520(buf0);
        func_002F2BB8(buf1, arg3);
        func_002128A8(buf0[0], buf1);
        func_002F2B60(buf1, 2);
        func_002114C8(buf0, 2);
    }
}
