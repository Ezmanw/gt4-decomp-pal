typedef int s32;

struct Entry {
    s32 offset;
    char pad[0x1C];
};

struct Table {
    char *base;
    s32 count;
    Entry *entries;
};

extern "C" void func_00277288(void *, char *);

extern "C" s32 func_00277430(Table *t, void *dst, s32 i) {
    if (i < t->count) {
        func_00277288(dst, t->base + t->entries[i].offset);
        return 1;
    }
    return 0;
}
