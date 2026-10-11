struct Item { char d[0x20]; };
struct List {
    int count;
    Item items[1];
};
extern "C" void func_003B7E68(void *ctx, Item *item);

extern "C" void func_00397E98(List *l, void *ctx)
{
    for (int i = 0; i < l->count; i++)
        func_003B7E68(ctx, &l->items[i]);
}
