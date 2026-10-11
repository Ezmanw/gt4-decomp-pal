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

extern "C" void func_0048F4D0(Entry *e, int delta);

extern "C" void func_0048F500(Header *h, int base) {
    if (h->magic == 0x32627067) {
        base -= h->base;
        h->base = base;
        if (base) {
            for (int i = 0; i < h->count; i++)
                func_0048F4D0(&h->entries[i], base);
        }
    }
}
