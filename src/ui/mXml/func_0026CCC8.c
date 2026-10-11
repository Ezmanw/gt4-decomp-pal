struct S { int a; int n; int data[1]; };
int *func_0026CCC8(struct S *s) {
    int i;
    for (i = 0; i < s->n; i++) return &s->data[i];
    return 0;
}
