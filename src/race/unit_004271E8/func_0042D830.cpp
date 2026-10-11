struct Group {
    char pad0[0x14];
    unsigned short count;
    short pad16;
    void **items;
};

extern "C" void func_0042DDD0(void *item, float t);

extern "C" void func_0042D830(Group *g, float t)
{
    for (int i = 0; i < g->count; i++)
        func_0042DDD0(g->items[i], t);
}
