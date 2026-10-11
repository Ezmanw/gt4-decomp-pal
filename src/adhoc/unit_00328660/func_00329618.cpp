/* Function-local static object, written out: guard, constructor, atexit destructor. */
extern int D_00620184;
extern char D_008424C0[];

extern "C" void *func_00328958(void *obj, int a, int b);
extern "C" int func_005A2ED0(void (*fn)(void));
extern "C" void func_00329710(void);

extern "C" void *func_00329618(void)
{
    int *guard = &D_00620184;
    if (*guard == 0) {
        func_00328958(D_008424C0, 0, 0);
        *guard = 1;
        func_005A2ED0(func_00329710);
    }
    return D_008424C0;
}
