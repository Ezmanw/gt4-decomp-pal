typedef int s32;
s32 func_00477678(s32 *a);
s32 func_0047AC30(char *arg0) {
    s32 *p = (s32 *)(arg0 + 0x14);
    if ((*p ^ 7) == 0) return func_00477678(p) + 4;
    return 0;
}
