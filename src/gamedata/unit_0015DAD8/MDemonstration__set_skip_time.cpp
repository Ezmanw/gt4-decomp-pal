extern "C" void func_0015D8A0(void *);
extern "C" void func_0015D848(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Target {
    char pad0[0x58];
    int value;
};

struct Owner {
    char pad0[0x10];
    Target *target;
};

struct A {
    Owner *p;
    int pad[3];
};

struct B {
    int v[4];
};

static inline int get(B *b) { return b->v[0]; }

extern "C" void MDemonstration__set_skip_time(void *arg0, void *arg1, void *arg2, void *name)
{
    A a;
    B b;
    func_0015D8A0(&a);
    Target *t = a.p->target;
    func_002FCA20(&b, name);
    t->value = func_002FE3A8(get(&b));
    func_002FC9C8(&b, 2);
    func_0015D848(&a, 2);
}
