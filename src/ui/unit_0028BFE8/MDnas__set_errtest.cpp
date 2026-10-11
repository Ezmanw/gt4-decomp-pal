extern "C" void func_0028BF00(void *);
extern "C" void func_0028BEA8(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Target {
    char pad0[0x34];
    int value;
};

struct A {
    Target *p;
    int pad[3];
};

struct B {
    int v[4];
};

static inline int get(B *b) { return b->v[0]; }

extern "C" void MDnas__set_errtest(void *arg0, void *arg1, int count, void *name)
{
    A a;
    B b;
    func_0028BF00(&a);
    Target *t = a.p;
    func_002FCA20(&b, name);
    t->value = func_002FE3A8(get(&b));
    func_002FC9C8(&b, 2);
    func_0028BEA8(&a, 2);
}
