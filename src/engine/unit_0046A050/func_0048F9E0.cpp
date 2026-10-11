typedef int s32;
typedef unsigned int u32;

extern "C" s32 func_0048F868(s32 arg0, s32 arg1, s32 arg2);

extern "C" u32 func_0048F9E0(s32 arg0, s32 arg1) {
    return func_0048F868(arg0, arg1, 0) != 0;
}
