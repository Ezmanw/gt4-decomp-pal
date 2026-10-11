struct Params {
    int v[8];
};

extern "C" void func_003435E8(Params *);
extern "C" float func_003596D8(void *obj, float x);
extern "C" float func_003509D0(void *table, Params *p);
extern char D_00620320[];

extern "C" float func_0034EB08(void *obj, Params *p, float x)
{
    Params def;
    func_003435E8(&def);
    if (p == 0)
        p = &def;
    float a = func_003596D8(obj, x);
    return a * func_003509D0(D_00620320, p);
}
