struct Key {
    int a;
    int b;
};

extern "C" void func_0044BC78(unsigned char *p, unsigned char *q, int a, int b);

extern "C" void func_0044C250(Key *key, unsigned char *buf, int size)
{
    unsigned char *p = buf;
    unsigned char *end = p + size - 8;
    for (; p <= end; p++)
        func_0044BC78(p, p, key->a, key->b);
}
