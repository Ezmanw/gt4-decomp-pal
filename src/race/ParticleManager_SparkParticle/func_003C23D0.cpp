extern "C" void *SparkParticle__structor_0(void *owner);
extern "C" void func_003C1660(void *p, int a, int b, float x, float y, int c, float z, int d);

extern "C" void func_003C23D0(void *owner, int a, int b, float x, float y, int c, float z, int d) {
    void *p = SparkParticle__structor_0(owner);
    if (p)
        func_003C1660(p, a, b, x, y, c, z, d);
}
