typedef int s32;

extern "C" void func_003D34D0(char *arg0) {
    s32 *p = (s32 *)(arg0 + 0x92A8);
    s32 one = 1;
    s32 i = 6;

    do {
        i -= 1;
        *p = one;
        p++;
    } while (i != 0);
}
