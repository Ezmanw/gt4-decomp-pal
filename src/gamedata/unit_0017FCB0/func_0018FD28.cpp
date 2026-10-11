struct VEntry {
    short delta;
    short index;
    void (*fn)(void *, int);
};

struct Target {
    char pad0[0xC];
    VEntry *vtbl;
};

struct Obj {
    char pad0[0x10];
    void *table;
};

extern "C" Target *func_00437298(void *table, int a, int b);

extern "C" void func_0018FD28(Obj *o, int value, int a, int b) {
    Target *t = func_00437298(o->table, a, b);
    VEntry *e = &t->vtbl[3];
    e->fn((char *)t + e->delta, value);
}
