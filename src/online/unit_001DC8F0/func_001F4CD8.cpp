extern void *func_001F13A8(void *);
extern void mUpdateContext__Sync(int);
extern int func_004F6198(char *, int, int);
extern char D_00645570[];

void *func_001F4CD8(void *arg0, int arg1, int arg2)
{
    while (!func_004F6198(D_00645570, arg1, arg2))
        mUpdateContext__Sync(1);
    return func_001F13A8(arg0);
}
