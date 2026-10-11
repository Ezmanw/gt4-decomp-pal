struct C { char pad[0x34]; int f34; };
extern void func_0025BE48(struct C *, int *, float *, float *, int, int);
void func_0025BB60(struct C *c, float y)
{
    func_0025BE48(c, &c->f34, 0, &y, 0, 0);
}
