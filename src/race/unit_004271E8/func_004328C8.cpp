typedef int s32;

extern "C" s32 func_004328C0(s32 arg0);
extern "C" void memcpy(s32 arg0, s32 arg1, s32 arg2);

extern "C" s32 func_004328C8(s32 arg0, s32 arg1) {
    s32 temp = func_004328C0(arg0);
    memcpy(arg1, arg0, temp);
    return arg1 + func_004328C0(arg0);
}
