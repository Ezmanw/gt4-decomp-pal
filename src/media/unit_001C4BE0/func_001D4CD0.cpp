extern "C" void func_001D4C90(void *a, unsigned int from, void *c, unsigned int to, int n);

extern "C" void func_001D4CD0(void *a, unsigned int from, void *c, unsigned int to, float t)
{
    func_001D4C90(a, from, c, to, (int)(t * (float)(from - to)));
}
