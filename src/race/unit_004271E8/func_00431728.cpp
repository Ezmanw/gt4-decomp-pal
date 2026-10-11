typedef int s32;

extern "C" s32 func_004316D0(s32 arg0);
extern "C" void memcpy(s32 arg0, s32 arg1, s32 arg2);

extern "C" s32 func_00431728(s32 arg0, s32 arg1) {
    s32 t = func_004316D0(arg0);
    memcpy(arg0, arg1, t);
    return arg1 + func_004316D0(arg0);
}
