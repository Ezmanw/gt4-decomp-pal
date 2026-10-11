struct Entry {
    void *get() { return item; }
    char pad[0x14];
    void *item;
};

struct List {
    Entry *entries;
    unsigned int count;
};

extern "C" void func_00460120(void *item);

extern "C" void func_00460160(List *l) {
    for (unsigned int i = 0; i < l->count; i++)
        func_00460120(l->entries[i].get());
}
