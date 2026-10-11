typedef int s32;

extern "C" s32 func_00391A70(void *a0);

extern char D_00844348[];

extern s32 D_00621348;

extern "C" void *func_00391AD0(void) {
    if (D_00621348 == 0) {
        s32 t = func_00391A70(D_00844348);
        D_00621348 = 1;
        (void)t;
    }
    return D_00844348;
}
