struct E { int a[4]; };
extern void func_002031A8(struct E *, int);
void func_005E4F68(struct E *first, struct E *last, int x) {
    for (; first != last; ++first) func_002031A8(first, x);
}
