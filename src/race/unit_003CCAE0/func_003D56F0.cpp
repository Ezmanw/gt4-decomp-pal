struct Elem {
    char pad[0x320];
};

struct Obj {
    Elem items[6];
};

extern "C" void func_003D4E90(Elem *e);
extern "C" void PitmenTiny__clear(Obj *o);

extern "C" void func_003D56F0(Obj *o) {
    Elem *e = o->items;
    for (int i = 5; i != -1; i--) {
        func_003D4E90(e);
        e++;
    }
    return PitmenTiny__clear(o);
}
