typedef int s32;

extern "C" void func_00322A38(s32 *arg0);
extern "C" void func_003186E8(s32 *arg0, s32 arg1);
extern "C" void func_003231E0(s32 arg0, s32 *arg1);
extern "C" void func_00318690(s32 *arg0, s32 arg1);
extern "C" void func_003229E0(s32 *arg0, s32 arg1);

extern "C" void ThreadGroup__append(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 == 1) {
        s32 buf0[4];
        s32 buf1[4];

        func_00322A38(buf0);
        func_003186E8(buf1, arg3);
        func_003231E0(buf0[0], buf1);
        func_00318690(buf1, 2);
        func_003229E0(buf0, 2);
    }
}
