extern "C" void func_00221C80(void *, void *);
extern "C" void func_00221C28(void *, int);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_002FC9C8(void *, int);
extern "C" int func_002FE3A8(int);

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

extern "C" void MNetConf__set_phy_config(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        B b;
        A a;
        func_002FCA20(&b, name);
        A *pa = &a;
        func_00221C80(pa, arg1);
        VObj *o = pa->p;
        VEntry *e = (VEntry *)(o->vtbl + 0x288);
        char *self = (char *)o + e->delta;
        int arg = func_002FE3A8(get(&b));
        e->fn(self, arg);
        func_00221C28(pa, 2);
        func_002FC9C8(&b, 2);
    }
}
