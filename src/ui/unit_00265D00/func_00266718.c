struct S { char pad[0x98]; unsigned char f; };
int func_00266718(struct S *p, unsigned long long m) { return ((p->f >> 4) & m) != 0; }
