struct S { int pad; unsigned bits[1]; };
int func_0043A0E8(struct S *s, unsigned n) {
    unsigned w = s->bits[n >> 5];
    unsigned mask = 1 << (n & 31);
    return (w & mask) != 0;
}
