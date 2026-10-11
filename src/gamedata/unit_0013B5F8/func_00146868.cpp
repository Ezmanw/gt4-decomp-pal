struct Obj { char pad[0x178]; int key; };
struct Handle;
extern "C" {
void func_0013BDC8(Handle *h, void *src);
void func_0013BD70(Handle *h, int flags);
}
struct Handle {
    Obj *p;
    int pad[3];
    Handle(void *x) { func_0013BDC8(this, x); }
    ~Handle() { func_0013BD70(this, 2); }
    Obj *operator->() { return p; }
};

extern "C" int func_00146868(void *x, void *y)
{
    Handle a(x);
    int ka = a->key;
    Handle b(y);
    return ka < b->key;
}
