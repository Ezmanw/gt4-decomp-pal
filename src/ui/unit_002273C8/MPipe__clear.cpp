extern "C" void func_002272D8(void *);
extern "C" void func_00227280(void *, int);
extern "C" void func_00576788(void *);
extern "C" void func_005767C0(void *);

struct Lock {
    void *const m;
    Lock(void *mutex) : m(mutex) { func_00576788(m); }
    ~Lock() { func_005767C0(m); }
};

struct Range {
    int first;
    int last;
    int end;
};

struct Pool {
    char pad0[0x10];
    Range range;
    char pad1c[0x104];
    char mutex[0x10];
};

struct Handle {
    Pool *p;
    int pad[3];
};

extern "C" void MPipe__clear(void)
{
    Handle h;
    func_002272D8(&h);
    {
        Pool *p = h.p;
        Range *r = &p->range;
        Lock lock(p->mutex);
        r->first = 0;
        r->last = 0;
        r->end = 0;
    }
    func_00227280(&h, 2);
}
