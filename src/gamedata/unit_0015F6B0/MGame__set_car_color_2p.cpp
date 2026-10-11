extern "C" void * func_0015F3E8(void *);
extern "C" void func_0015F390(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Sub {
    char pad0[0x48];
    int value;
};
struct Owner {
    char pad0[0x10];
    char *q;
};
struct A {
    Owner *p;
    int pad[3];
};
struct B {
    int v[4];
};
static inline int get(B *b) { return b->v[0]; }

extern "C" void MGame__set_car_color_2p(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_0015F3E8(&a);
        func_002FCA20(&b, name);
        Sub *t = (Sub *)(a.p->q + 0x140);
        t->value = func_002FE3A8(get(&b));
        func_002FC9C8(&b, 2);
        func_0015F390(&a, 2);
    }
}
