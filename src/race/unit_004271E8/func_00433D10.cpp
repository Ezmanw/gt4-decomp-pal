struct Item {
    char pad[0x238];
};

struct ItemList {
    int pad0;
    Item *items;
    int count;
};

extern "C" void func_004332E8(Item *item);
extern "C" void func_00433230(Item *item);

extern "C" void func_00433D10(ItemList *l, Item *items, int count, int selected) {
    l->items = items;
    l->count = count;
    for (int i = 0; i < l->count; i++) {
        if (i == selected)
            func_004332E8(&l->items[i]);
        else
            func_00433230(&l->items[i]);
    }
}
