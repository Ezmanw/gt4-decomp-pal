typedef int s32;
typedef signed char s8;
s32 func_00445E30(char *a, s32 b);
s32 func_00445DF8(char *arg0) {
    s32 c = *(s8 *)(arg0 + 0x18);
    if (c == -1) return 0;
    return func_00445E30(arg0, c);
}
