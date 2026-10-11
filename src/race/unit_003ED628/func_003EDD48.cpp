extern "C" void *func_003EDAD0(void *holder);
extern "C" void func_003EDA78(void *holder, void *obj);
extern "C" void *func_00463CB0(void *desc, int flags);
extern "C" char D_00621F78[];
extern "C" char D_00621F58[];

extern "C" void *func_003EDD48(void)
{
    void *p = func_003EDAD0(D_00621F78);
    if (!p) {
        func_003EDA78(D_00621F78, func_00463CB0(D_00621F58, 0));
        p = func_003EDAD0(D_00621F78);
    }
    return p;
}
