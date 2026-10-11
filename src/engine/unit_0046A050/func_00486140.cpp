struct Entry {
    int data[4];
};

struct Header {
    int magic;
    int base;
    int pad8;
    int count;
    Entry entries[1];
};

extern "C" void func_004860B0(Entry *e, int delta);

extern "C" void func_00486140(Header *h, int base) {
    if (h->magic == 0x33305452) {
        base -= h->base;
        h->base = base;
        if (base) {
            for (int i = 0; i < h->count; i++)
                func_004860B0(&h->entries[i], base);
        }
    }
}
