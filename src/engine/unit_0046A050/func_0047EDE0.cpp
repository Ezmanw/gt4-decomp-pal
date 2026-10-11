struct Elem { int a, b; };
extern "C" void func_0047ECE8(void *ctx);
extern "C" void func_0047EEF8(Elem *e, void *ctx);
struct Array {
    Elem *data;
    int count;
    Elem *begin() { return data; }
    Elem *end() { return data + count; }
    void visit(void *ctx)
    {
        Elem *last = end();
        for (Elem *e = begin(); e != last; e++)
            func_0047EEF8(e, ctx);
    }
};
struct Obj {
    char pad[0x10];
    Array arr;
};

extern "C" void func_0047EDE0(Obj *o, void *ctx)
{
    func_0047ECE8(ctx);
    o->arr.visit(ctx);
}
