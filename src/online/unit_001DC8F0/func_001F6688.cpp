extern void *func_001F13A8(void *);
extern void mUpdateContext__Sync(int);
extern int func_005009C0(char *, int, int);
extern char D_00645570[];

void *func_001F6688(void *arg0, int arg1, int arg2)
{
    while (!func_005009C0(D_00645570, arg1, arg2))
        mUpdateContext__Sync(1);
    return func_001F13A8(arg0);
}
