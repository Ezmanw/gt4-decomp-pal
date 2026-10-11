struct S { char pad[0x5c]; int f; };
int func_003A2290(struct S *s) { return (s->f & 4) > 0; }
