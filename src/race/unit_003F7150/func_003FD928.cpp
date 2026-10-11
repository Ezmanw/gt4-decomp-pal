struct Item {
    char pad0[0x14];
    int m14;
};

struct Node {
    char pad0[0x10];
    Item *cur;
};

struct List;

struct Obj {
    char pad0[0x60];
    List *list;
};

extern "C" Item *func_003FCF50(List *l, Item *i);
extern "C" Item *func_003FCFE8(List *l, Item *i);
extern "C" void func_003FC870(Node *n, int v);

extern "C" int func_003FD928(Obj *o, Node *n, int next) {
    List *l = o->list;
    if (!n->cur)
        return 0;
    Item *i;
    if (next)
        i = func_003FCF50(l, n->cur);
    else
        i = func_003FCFE8(l, n->cur);
    if (!i)
        return 0;
    if (i == n->cur)
        return 0;
    func_003FC870(n, i->m14);
    return 1;
}
