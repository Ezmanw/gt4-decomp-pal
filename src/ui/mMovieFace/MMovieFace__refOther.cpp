typedef int s32;

extern "C" void func_0021DB28(s32 *arg0, s32 arg1);
extern "C" s32 func_0021FC28(s32 arg0);
extern "C" void func_0021FC30(s32 arg0, s32 arg1);
extern "C" void func_0021DAD0(s32 *arg0, s32 arg1);

extern "C" void MMovieFace__refOther(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 buf0[4];
    s32 buf1[4];

    if (arg2 > 0) {
        func_0021DB28(buf0, arg1);
        s32 *p1 = buf1;
        func_0021DB28(p1, arg3);
        s32 base0 = buf0[0];
        s32 result = func_0021FC28(p1[0]);
        func_0021FC30(base0, result);
        func_0021DAD0(p1, 2);
        func_0021DAD0(buf0, 2);
    }
}
