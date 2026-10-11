extern "C" void func_00221C80(void *);
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

extern "C" void MNetConf__set_use_dhcp(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        A a;
        B b;
        func_00221C80(&a);
        func_002FCA20(&b, name);
        VObj *o = a.p;
        VEntry *e = (VEntry *)(o->vtbl + 0x198);
        char *self = (char *)o + e->delta;
        int arg = func_002FE3A8(get(&b)) != 0;
        e->fn(self, arg);
        func_002FC9C8(&b, 2);
        func_00221C28(&a, 2);
    }
}
