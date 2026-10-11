struct S { int a; float f; };
int func_00376118(struct S *s, float x) {
    if (s->a < 0) return 1;
    return s->f <= x;
}
