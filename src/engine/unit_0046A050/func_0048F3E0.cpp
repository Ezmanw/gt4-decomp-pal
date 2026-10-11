struct Entry {
    int data[2];
};

struct Header {
    int magic;
    int base;
    int pad8;
    int count;
    Entry entries[1];
};

extern "C" void func_0048F3B0(Entry *e, int delta);

extern "C" void func_0048F3E0(Header *h, int base) {
    if (h->magic == 0x31627067) {
        base -= h->base;
        h->base = base;
        if (base) {
            for (int i = 0; i < h->count; i++)
                func_0048F3B0(&h->entries[i], base);
        }
    }
}
