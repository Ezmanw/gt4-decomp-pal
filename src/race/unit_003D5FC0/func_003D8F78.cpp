typedef int s32;

struct Node { char pad[0xC]; Node *next; };
extern "C" s32 func_003D8EF8(void *, Node *);

extern "C" Node *func_003D8F78(void *ctx, Node *n) {
    for (;;) {
        n = n->next;
        if (!n)
            return 0;
        if (func_003D8EF8(ctx, n))
            return n;
    }
}
