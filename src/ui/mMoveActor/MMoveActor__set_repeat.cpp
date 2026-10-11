extern "C" void func_002C0538(void *);
extern "C" void func_002C04E0(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Target {
    char pad0[0x58];
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

extern "C" void MMoveActor__set_repeat(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_002C0538(&a);
        func_002FCA20(&b, name);
        Target *t = a.p;
        t->value = func_002FE3A8(get(&b)) != 0;
        func_002FC9C8(&b, 2);
        func_002C04E0(&a, 2);
    }
}
