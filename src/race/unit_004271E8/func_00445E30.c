struct Info { int w[16]; };
extern void func_00445C48(void *, int, struct Info *);
int func_00445E30(void *a, int b)
{
    struct Info info;
    func_00445C48(a, b, &info);
    return info.w[9] & 0xFFFFFF;
}
