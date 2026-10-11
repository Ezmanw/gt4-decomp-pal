extern "C" void func_00157D70(void *);
extern "C" void func_00157D18(void *, int);
extern "C" void func_002ED770(void *, void *);
extern "C" void func_002ED718(void *, int);

struct Target;

extern "C" void func_001588D0(Target *t, void *b);

struct A {
    Target *p;
    int pad[7];
};

struct B {
    int v[4];
};

extern "C" void MColorChipFace__setColor(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_00157D70(&a);
        Target *t = a.p;
        func_002ED770(&b, name);
        func_001588D0(t, &b);
        func_002ED718(&b, 2);
        func_00157D18(&a, 2);
    }
}
