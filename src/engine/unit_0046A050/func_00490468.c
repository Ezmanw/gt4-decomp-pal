struct S { int arr[2]; int n; int pad; int h; int t; };
void func_00490468(struct S *p, int i) {
    p->t = p->h;
    p->arr[i] = 0;
    p->n--;
}
