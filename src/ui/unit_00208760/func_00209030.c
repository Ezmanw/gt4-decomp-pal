struct Q { int a, b, c, d; };
extern void func_003094A0(void *, struct Q *);
extern void func_00209078(void *, int);
void func_00209030(void *p, int v)
{
    struct Q q;
    q.a = 0;
    func_003094A0(p, &q);
    func_00209078(p, v);
}
