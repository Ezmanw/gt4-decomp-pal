typedef int s32;

extern "C" unsigned int func_0057F260(const char *);
extern "C" void func_00461A78();
extern "C" s32 func_00461820(const char *);

extern "C" s32 func_00461D00(const char *s) {
    s32 r;
    if (!s || !func_0057F260(s)) {
        func_00461A78();
        r = -1;
    } else {
        r = func_00461820(s);
    }
    return r;
}
