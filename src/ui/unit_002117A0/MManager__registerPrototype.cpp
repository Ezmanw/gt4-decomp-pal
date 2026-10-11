typedef int s32;

extern "C" void func_00211520(s32 *arg0);
extern "C" void func_00255268(s32 *arg0, s32 arg1);
extern "C" void func_00212E90(s32 arg0, s32 *arg1);
extern "C" void func_00255210(s32 *arg0, s32 arg1);
extern "C" void func_002114C8(s32 *arg0, s32 arg1);

extern "C" void MManager__registerPrototype(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 == 1) {
        s32 buf0[4];
        s32 buf1[4];

        func_00211520(buf0);
        func_00255268(buf1, arg3);
        func_00212E90(buf0[0], buf1);
        func_00255210(buf1, 2);
        func_002114C8(buf0, 2);
    }
}
