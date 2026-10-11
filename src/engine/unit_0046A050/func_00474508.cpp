struct Elem { char pad[0x34]; };
struct Array {
    Elem *data; int count;
    int size() const { return count; }
    Elem &operator[](int i) { return data[i]; }
};
struct Obj { char pad[0x60]; Array items; };

extern "C" void func_00479FC0(Elem *e, int arg);

extern "C" void func_00474508(Obj *o, int arg) {
    for (int i = 0; i < o->items.size(); i++)
        func_00479FC0(&o->items[i], arg);
}
