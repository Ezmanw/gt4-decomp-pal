typedef int s32;
typedef short s16;

extern "C" s32 func_002FF998(void *arg0);

extern "C" s32 func_002FFA80(void *arg0, s16 *arg1) {
    *arg1 = (s16)func_002FF998(arg0);
    return (s32)arg0;
}
