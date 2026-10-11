struct A { char pad[0x18]; void *res; };
extern void free(void *);
void func_003954C8(struct A *a)
{
    free(a->res);
    a->res = 0;
}
