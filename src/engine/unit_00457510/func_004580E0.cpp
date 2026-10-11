struct List {
    int count;
    void *items[1];
};

extern "C" void func_00457B70(void *item, void *a, void *b);

extern "C" void func_004580E0(List *l, void *a, void *b) {
    for (int i = 0; i < l->count; i++)
        func_00457B70(l->items[i], a, b);
}
