extern "C" void func_0024E528(void *, void *);
extern "C" void func_0024E4D0(void *, int);
extern "C" void func_003124C8(void *, void *);
extern "C" void func_00312470(void *, int);
extern "C" int func_00314A78(int);

struct VEntry { short delta; short index; void (*fn)(void *, int); };
struct VObj { char pad0[4]; char *vtbl; };

struct A {
    VObj *p;
    int pad[3];
};
struct B {
    int v[4];
};
static inline int get(B *b) { return b->v[0]; }

extern "C" void MUpdateContext__loadGpbFromMC(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        B b;
        A a;
        func_003124C8(&b, name);
        A *pa = &a;
        func_0024E528(pa, arg1);
        VObj *o = pa->p;
        VEntry *e = (VEntry *)(o->vtbl + 0x1B8);
        char *self = (char *)o + e->delta;
        int arg = func_00314A78(get(&b));
        e->fn(self, arg);
        func_0024E4D0(pa, 2);
        func_00312470(&b, 2);
    }
}
