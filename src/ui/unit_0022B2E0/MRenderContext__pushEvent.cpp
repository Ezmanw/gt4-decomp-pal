typedef int s32;

extern "C" void func_0022AE78(s32 *arg0);
extern "C" void func_0028E528(s32 *arg0, s32 arg1);
extern "C" void func_00231AF8(s32 arg0, s32 *arg1);
extern "C" void func_0028E4D0(s32 *arg0, s32 arg1);
extern "C" void func_0022AE20(s32 *arg0, s32 arg1);

extern "C" void MRenderContext__pushEvent(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 == 1) {
        s32 buf0[4];
        s32 buf1[4];

        func_0022AE78(buf0);
        func_0028E528(buf1, arg3);
        func_00231AF8(buf0[0], buf1);
        func_0028E4D0(buf1, 2);
        func_0022AE20(buf0, 2);
    }
}
