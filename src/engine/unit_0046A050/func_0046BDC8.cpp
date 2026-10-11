struct Iter { int w[4]; };
struct Info { int count; };
extern "C" Info *func_0046A428(void *, int);
extern "C" void func_0046A2E0(Iter *, void *, int);
extern "C" char *func_0046A3A0(Iter *, int);
extern "C" void *func_005A48D8(void *, int, unsigned int);

extern "C" int func_0046BDC8(void *t)
{
    if (!func_0046A428(t, 5)) return 0;
    Iter it;
    func_0046A2E0(&it, t, 5);
    for (int i = 0; i < func_0046A428(t, 5)->count; i++)
        func_005A48D8(func_0046A3A0(&it, i) + 0x38, 0, 8);
    return 1;
}
