extern "C" void func_00179300(void *);
extern "C" void func_001792A8(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Target {
    char pad0[0x688];
    int value;
};

struct Owner {
    char pad0[0x20];
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

extern "C" void MMemoryCardManager__set_cursorPos(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_00179300(&a);
        Target *t = a.p->target;
        func_002FCA20(&b, name);
        t->value = func_002FE3A8(get(&b));
        func_002FC9C8(&b, 2);
        func_001792A8(&a, 2);
    }
}
