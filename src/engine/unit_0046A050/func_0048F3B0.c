static inline void relocate(int *field, int base)
{
    if (*field) *field += base;
}
void func_0048F3B0(int *p, int base)
{
    relocate(&p[0], base);
    relocate(&p[1], base);
}
