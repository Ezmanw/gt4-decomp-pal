typedef unsigned long u64;

struct Obj {
    int m0;
    void *items;
    int count;
};

extern "C" u64 func_00447FF0(void *x);
extern "C" void *func_005A3008(const void *key, const void *base, int n, int size, int (*cmp)(const void *, const void *));
extern "C" int func_00433F60(const void *a, const void *b);
extern "C" void func_00433E18(Obj *o, void *x);

extern "C" void func_00433F88(Obj *o, void *x) {
    u64 key = func_00447FF0(x);
    if (func_005A3008(&key, o->items, o->count, 0x238, func_00433F60) == 0)
        func_00433E18(o, x);
}
