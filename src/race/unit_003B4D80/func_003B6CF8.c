struct R { char pad[0x119c]; int v[1]; };
extern void func_003BBC28(int *, char *, int);
void func_003B6CF8(char *p, int i, int x) {
    int *a = (int *)(p + 0x119c);
    int *e;
    e = a + i;
    *e = x;
    func_003BBC28(a, p + 0x1158, i);
}
