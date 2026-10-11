typedef int s32;

extern "C" void func_00370320(void);
extern "C" void func_00370360(void);

extern "C" void func_00370380(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        return func_00370320();
    }
    return func_00370360();
}
