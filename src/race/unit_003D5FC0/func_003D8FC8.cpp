typedef int s32;

struct Node {
    char pad[0x10];
    Node *next;
};

extern "C" s32 func_003D8EF8(void *, Node *);

extern "C" Node *func_003D8FC8(void *ctx, Node *n) {
    for (;;) {
        n = n->next;
        if (n == 0)
            return 0;
        if (func_003D8EF8(ctx, n))
            return n;
    }
}
