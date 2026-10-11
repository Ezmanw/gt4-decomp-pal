extern "C" void func_002CE698(void *);
extern "C" void func_002CE640(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

struct Target {
    char pad0[0x24];
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

extern "C" void MScriptWatcher__set_count(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_002CE698(&a);
        func_002FCA20(&b, name);
        Target *t = a.p;
        t->value = func_002FE3A8(get(&b));
        func_002FC9C8(&b, 2);
        func_002CE640(&a, 2);
    }
}
