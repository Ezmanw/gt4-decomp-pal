typedef int s32;

extern "C" s32 func_00430FC8(void *arg0);
extern "C" void *func_004311D0(void *arg0, char *arg1);
extern "C" int func_005A5A30(char *buf, int n, const char *fmt, ...);

extern "C" s32 func_00431468(void *ctx, const char *name, const char *fmt, s32 first, s32 last) {
    char buf[64];
    s32 i;
    for (i = first; i <= last; i++) {
        void *p;
        func_005A5A30(buf, 0x40, fmt, name, i);
        p = func_004311D0(ctx, buf);
        if (p == 0) {
            return 0;
        }
        if (func_00430FC8(p) == 0) {
            return 0;
        }
    }
    return 1;
}
