extern "C" int func_00423148(int a, int b);

extern "C" int func_00423190(int n, int *v)
{
    if (n <= 0)
        return 0;
    int r = v[0];
    for (int i = 1; i < n; i++)
        r = func_00423148(r, v[i]);
    return r;
}
