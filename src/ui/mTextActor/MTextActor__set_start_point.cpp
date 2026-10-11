extern "C" void func_002E3D18(void *);
extern "C" void func_002E3CC0(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Target {
    char pad0[0x1C];
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

extern "C" void MTextActor__set_start_point(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_002E3D18(&a);
        func_002FCA20(&b, name);
        Target *t = a.p;
        t->value = func_002FE3A8(get(&b));
        func_002FC9C8(&b, 2);
        func_002E3CC0(&a, 2);
    }
}
