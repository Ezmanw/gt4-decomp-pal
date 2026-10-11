typedef int s32;

extern "C" void func_00192A28(void *arg0, int arg1);
extern "C" void func_00192A80(void *arg0, void *arg1);
extern "C" void func_001952F8(s32 arg0, s32 arg1);
extern "C" void func_0022AE20(void *arg0, int arg1);
extern "C" void func_0022AE78(void *arg0, void *arg1);

extern "C" void MPhotoMapWindow__doFocus(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 s0 = arg3;

    if (arg2 == 1) {
        s32 buf0[4];
        s32 buf1[4];

        func_00192A80(buf0, (void *)arg1);
        s32 *p1 = buf1;
        func_0022AE78(p1, (void *)s0);
        func_001952F8(buf0[0], p1[0]);
        func_0022AE20(p1, 2);
        func_00192A28(buf0, 2);
    }
}
