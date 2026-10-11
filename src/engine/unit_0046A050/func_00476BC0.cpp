struct Node {
    int type;
    int value;
};

extern "C" void func_00477070(Node *n, int value);
extern "C" void func_00477440(Node *n, int value);
extern "C" int strobe__Any__toString(Node *n);
extern "C" void func_00476E70(Node *n, int value);

extern "C" void func_00476BC0(Node *n) {
    if (n->type == 13)
        return func_00477070(n, n->value);
    if (n->type == 7)
        return func_00477440(n, n->value);
    if (n->type == 3)
        func_00476E70(n, strobe__Any__toString(n));
}
