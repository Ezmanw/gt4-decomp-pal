extern char D_00645570[];
extern int func_001F0E00(int);
extern int func_001F6A70(void *);
extern char *func_004F9F70(void *, int);
extern void func_004FA048(void *, char *);

int func_001F6DA0(void *ctx, int player)
{
    int kind = func_001F0E00(player);
    int count;
    int n;
    int i;

    if (kind == 3) {
        return 0;
    }
    n = func_001F6A70(ctx);
    count = 0;
    for (i = 0; i < n; i++) {
        char *entry = func_004F9F70(D_00645570, i);
        if (entry) {
            if (kind == entry[0x35]) {
                count++;
            }
        }
        func_004FA048(D_00645570, entry);
    }
    return count;
}
