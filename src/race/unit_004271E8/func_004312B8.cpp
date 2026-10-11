typedef int s32;

extern "C" s32 func_004312E8(s32 arg0, s32 arg1);
extern "C" s32 func_00448730(s32 arg0);

extern "C" s32 func_004312B8(s32 arg0, s32 arg1) {
    return func_004312E8(arg0, func_00448730(arg1));
}
