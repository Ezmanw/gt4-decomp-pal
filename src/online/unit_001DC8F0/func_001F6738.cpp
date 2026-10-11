struct Handle {
    void *p;
    char pad[0xC];
};

extern char D_00645570[];
extern char D_00696C90[];
extern char D_006959E0[];
extern void func_004FFB38(void *);
extern int func_001F13A8(void *);
extern void func_004FEEF8(void *, int, int);
extern int func_004FEFC8(void *);
extern char *func_004FEFD8(void *, int);
extern "C" void func_0057DA20(char *, const char *, ...);
extern "C" void func_0023B5D0(void *arg0);
extern "C" void func_0023CBD0(void *arg0, const char *arg1, const char *arg2);
extern "C" void func_0023B330(void *arg0, int arg1);

int func_001F6738(void *ctx, int a, int b)
{
    int count;
    int i;

    func_004FFB38(D_00645570);
    if (!func_001F13A8(ctx)) {
        return 0;
    }
    func_004FEEF8(D_00645570, a, b);
    if (!func_001F13A8(ctx)) {
        return 0;
    }
    count = func_004FEFC8(D_00645570);
    for (i = 0; i < count; i++) {
        char line[0x80];
        Handle h;
        char *entry = func_004FEFD8(D_00645570, i);
        func_0057DA20(line, D_00696C90, i, func_004FEFC8(D_00645570), entry, *(int *)(entry + 0x10));
        Handle *ph = &h;
        func_0023B5D0(ph);
        func_0023CBD0(ph->p, line, D_006959E0);
        func_0023B330(ph, 2);
    }
    return 1;
}
