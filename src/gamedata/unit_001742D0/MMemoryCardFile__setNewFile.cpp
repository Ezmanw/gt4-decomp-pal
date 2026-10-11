extern "C" void func_00174170(void *);
extern "C" void func_00174118(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);
extern "C" void func_001CC158(void *obj, bool on);

struct Owner {
    char pad0[0x10];
    void *target;
};

struct A {
    Owner *p;
    int pad[3];
};

struct B {
    int v[4];
};

static inline int get(B *b) { return b->v[0]; }

extern "C" void MMemoryCardFile__setNewFile(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_00174170(&a);
        func_002FCA20(&b, name);
        func_001CC158(a.p->target, func_002FE3A8(get(&b)) != 0);
        func_002FC9C8(&b, 2);
        func_00174118(&a, 2);
    }
}
