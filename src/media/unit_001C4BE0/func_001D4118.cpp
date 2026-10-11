extern "C" int func_001D4118(short *p, short *end)
{
    short *start = p;
    short v = *p++;
    while (*p == v && p < end)
        p++;
    return p - start;
}
