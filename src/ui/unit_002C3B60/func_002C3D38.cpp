struct Node;

struct Obj {
    char pad0[0x10];
    Node *root;
    Node *found;
    char key[0x10];
};

extern "C" Node *func_00460CA0(Node *root, int on, void *key);

extern "C" void func_002C3D38(Obj *o, int on) {
    void *key = o->key;
    Node *n = o->root;
    if (n) {
        n = func_00460CA0(n, on, key);
        if (!on) {
            n = 0;
        }
        o->found = n;
    }
}
