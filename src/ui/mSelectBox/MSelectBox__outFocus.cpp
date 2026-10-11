extern "C" void func_002D8C60(void *);
extern "C" void func_002D8C08(void *, int);
extern "C" void func_00232DD0(void *, void *);
extern "C" void func_00232D78(void *, int);
extern "C" void func_002DB500(void *obj, int value);

struct A {
    void *p;
    int pad[7];
};

struct B {
    int v[4];
};

static inline int get(B *b) { return b->v[0]; }

extern "C" void MSelectBox__outFocus(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_002D8C60(&a);
        void *obj = a.p;
        func_00232DD0(&b, name);
        func_002DB500(obj, get(&b));
        func_00232D78(&b, 2);
        func_002D8C08(&a, 2);
    }
}
