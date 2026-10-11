struct Handle {
    void *p;
    char pad[0xC];
};

extern char D_00645570[];
extern int func_004F5B10(void *);
extern char *func_004F5D00(void *, int);
extern void mUpdateContext__Sync(int);
extern int func_001F13A8(void *);
extern "C" void func_002ED6E8(Handle *, int *);
extern "C" Handle *func_002EFD48(Handle *);
extern "C" void func_002EF008(Handle *, void *, Handle *);
extern "C" void func_003094D0(Handle *, int);
extern "C" void func_002ED718(Handle *, int);
extern "C" void func_002ED700(Handle *, Handle *);
extern "C" void func_002FE3D0(Handle *, int);
extern "C" void func_002FC9C8(Handle *, int);

static inline void add_int(void *array, Handle *v, Handle *tmp, int value)
{
    func_002FE3D0(v, value);
    func_002EF008(tmp, array, v);
    func_003094D0(tmp, 2);
    func_002FC9C8(v, 2);
}

Handle *func_001F4A20(Handle *ret, void *ctx)
{
    Handle list;
    Handle row;
    Handle tmp;
    Handle v1;
    Handle v2;
    Handle v3;
    int zero;
    int count;
    int i;

    while (!func_004F5B10(D_00645570))
        mUpdateContext__Sync(1);
    if (!func_001F13A8(ctx)) {
        zero = 0;
        func_002ED6E8(ret, &zero);
        return ret;
    }
    func_002EFD48(&list);
    count = *(int *)(*(char **)(D_00645570 + 0x5A8) + 0x5B30);
    for (i = 0; i < count; i++) {
        char *entry = func_004F5D00(D_00645570, i);
        Handle *prow = &row;
        Handle *pt = &tmp;
        func_002EFD48(prow);
        add_int(prow->p, &v1, pt, *(int *)(entry + 0x1C));
        add_int(prow->p, &v2, pt, *(int *)(entry + 0x20));
        add_int(prow->p, &v3, pt, *(int *)(entry + 0x24));
        func_002EF008(pt, list.p, prow);
        func_003094D0(pt, 2);
        func_002ED718(prow, 2);
    }
    func_002ED700(ret, &list);
    func_002ED718(&list, 2);
    return ret;
}
