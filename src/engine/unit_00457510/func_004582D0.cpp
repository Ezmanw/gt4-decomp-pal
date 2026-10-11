struct Obj {
    char pad0[0x14];
    void *items[5];
};

extern "C" void func_004580E0(void *item, void *arg, int flag);

extern "C" void func_004582D0(Obj *self, void *arg)
{
    for (int i = 0; i < 5; i++)
        func_004580E0(self->items[i], arg, i == 2 || i == 3);
}
