struct List { short pad; unsigned short count; int *items; };
bool func_003CA0C0(int, int);

bool func_003CA180(List *l, int arg) {
    bool r = false;
    for (int i = 0; i < l->count; i++) r ^= func_003CA0C0(l->items[i], arg);
    return r;
}
