struct Node;
extern "C" Node *func_0025C458(Node *n);
extern "C" void func_002D8010(void *self, void *pos, Node *first, Node *last, int count);

extern "C" void func_002D80F0(void *self, void *pos, Node *first, Node *last) {
    int count = 0;
    for (Node *p = first; p != last; p = func_0025C458(p))
        count++;
    return func_002D8010(self, pos, first, last, count);
}
