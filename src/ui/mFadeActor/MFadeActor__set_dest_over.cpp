extern "C" void func_0020B458(void *);
extern "C" void func_0020B400(void *, int);
extern "C" void func_002F7D18(void *, void *);
extern "C" void func_002F7CC0(void *, int);
extern "C" float func_002F92B0(int);

struct Target {
    char pad0[0x30];
    float value;
};

struct A {
    Target *p;
    int pad[3];
};

struct B {
    int v[4];
};

static inline int get(B *b) { return b->v[0]; }

extern "C" void MFadeActor__set_dest_over(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_0020B458(&a);
        func_002F7D18(&b, name);
        Target *t = a.p;
        t->value = func_002F92B0(get(&b));
        func_002F7CC0(&b, 2);
        func_0020B400(&a, 2);
    }
}
