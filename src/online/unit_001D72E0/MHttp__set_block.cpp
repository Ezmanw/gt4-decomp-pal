extern "C" void func_001D6F18(void *);
extern "C" void func_001D6EC0(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Target {
    char pad0[0xD8];
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

extern "C" void MHttp__set_block(void *arg0, void *arg1, int count, void *name)
{
    A a;
    B b;
    func_001D6F18(&a);
    Target *t = a.p;
    func_002FCA20(&b, name);
    t->value = func_002FE3A8(get(&b)) == 1;
    func_002FC9C8(&b, 2);
    func_001D6EC0(&a, 2);
}
