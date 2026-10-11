extern void *func_001F13A8(void *);
extern void mUpdateContext__Sync(int);
extern int func_004F2F50(char *, int);
extern char D_00645570[];

void *func_001F2C68(void *arg0, int arg1)
{
    while (!func_004F2F50(D_00645570, arg1))
        mUpdateContext__Sync(1);
    return func_001F13A8(arg0);
}
