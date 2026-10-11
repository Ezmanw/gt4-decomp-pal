struct Handle {
    void *p;
    char pad[0xC];
};

extern char D_00645570[];
extern int func_004F2660(void *, int, int);
extern void mUpdateContext__Sync(int);
extern int func_001F13A8(void *);
extern void func_001F2CC8(Handle *, void *, int);
extern "C" void func_002ED6E8(Handle *, int *);
extern "C" Handle *func_002EFD48(Handle *);
extern "C" void func_002EF008(Handle *, void *, Handle *);
extern "C" void func_003094D0(Handle *, int);
extern "C" void func_002ED718(Handle *, int);
extern "C" void func_002ED700(Handle *, Handle *);

Handle *func_001F2860(Handle *ret, void *ctx, int a, int b)
{
    Handle list;
    Handle item;
    Handle tmp;
    int zero;
    int count;
    int i;

    while (!func_004F2660(D_00645570, a, b))
        mUpdateContext__Sync(1);
    if (!func_001F13A8(ctx)) {
        zero = 0;
        func_002ED6E8(ret, &zero);
        return ret;
    }
    func_002EFD48(&list);
    count = *(int *)(*(char **)(D_00645570 + 0x5A8) + 0x5B30);
    for (i = 0; i < count; i++) {
        func_001F2CC8(&item, ctx, i);
        func_002EF008(&tmp, list.p, &item);
        func_003094D0(&tmp, 2);
        func_002ED718(&item, 2);
    }
    func_002ED700(ret, &list);
    func_002ED718(&list, 2);
    return ret;
}
