typedef int s32;

extern "C" s32 func_003EDA00(void);
extern "C" void free(s32 arg0);
extern "C" void func_003EDA20(void *arg0);

extern char D_00621F78[];
extern s32 D_00621F74;

extern "C" void func_003EDCA8(void) {
    free(func_003EDA00());
    func_003EDA20(D_00621F78);
    D_00621F74 = 0;
}
