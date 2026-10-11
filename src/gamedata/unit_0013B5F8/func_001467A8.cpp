typedef int s32;

extern "C" s32 func_00146760(void *);
extern "C" s32 func_00146788(void *);

extern "C" s32 func_001467A8(void *self) {
    s32 r;
    if (func_00146760(self)) r = 1;
    else r = func_00146788(self) ? 2 : 0;
    return r;
}
