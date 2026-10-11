struct S { char pad[0x28]; struct P { char pad[0x10]; int v; } *p; };
extern "C" void func_001FCAC0(S *, int);
extern "C" void func_0021D068(S *s) {
    if (s->p) return func_001FCAC0(s, s->p->v);
    func_001FCAC0(s, 0);
}
