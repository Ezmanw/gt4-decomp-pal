extern "C" void func_002D26F0(void *);
extern "C" void func_002D2698(void *, int);
extern "C" void func_00255268(void *, void *);
extern "C" void func_00255210(void *, int);
extern "C" void func_002D2E10(void *obj, int value);

struct A {
    void *p;
    int pad[7];
};

struct B {
    int v[4];
};

static inline int get(B *b) { return b->v[0]; }

extern "C" void MScrollWindow__warp(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_002D26F0(&a);
        void *obj = a.p;
        func_00255268(&b, name);
        func_002D2E10(obj, get(&b));
        func_00255210(&b, 2);
        func_002D2698(&a, 2);
    }
}
