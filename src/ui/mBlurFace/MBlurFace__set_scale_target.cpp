extern "C" void func_0027BD78(void *);
extern "C" void func_0027BD20(void *, int);
extern "C" void func_002F7D18(void *, void *);
extern "C" void func_002F7CC0(void *, int);
extern "C" float func_002F92B0(int);

struct Target {
    char pad0[0xA8];
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

extern "C" void MBlurFace__set_scale_target(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_0027BD78(&a);
        func_002F7D18(&b, name);
        Target *t = a.p;
        t->value = func_002F92B0(get(&b));
        func_002F7CC0(&b, 2);
        func_0027BD20(&a, 2);
    }
}
