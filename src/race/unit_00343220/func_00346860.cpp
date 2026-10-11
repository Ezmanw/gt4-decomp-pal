typedef int s32;

extern s32 D_0062023C;
extern "C" void *func_00346810(void *);
extern "C" void *memcpy(void *, const void *, unsigned int);

extern "C" void func_00346860(void *dst, void *src) {
    void *d = func_00346810(dst);
    memcpy(d, func_00346810(src), D_0062023C);
}
