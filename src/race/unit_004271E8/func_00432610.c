struct E { int a, b; unsigned char c; char pad[0x23]; };
unsigned char func_00432610(struct E *t, unsigned i) {
    struct E *e;
    if (i < 10u) { e = &t[i]; return e->c; }
    return 0xf;
}
