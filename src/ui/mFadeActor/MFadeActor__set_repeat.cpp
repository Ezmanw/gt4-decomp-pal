extern "C" void func_0020B458(void *);
extern "C" void func_0020B400(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Target {
    char pad0[0x38];
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

extern "C" void MFadeActor__set_repeat(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_0020B458(&a);
        func_002FCA20(&b, name);
        int v = func_002FE3A8(get(&b)) != 0;
        Target *t = a.p;
        t->value = v;
        func_002FC9C8(&b, 2);
        func_0020B400(&a, 2);
    }
}
