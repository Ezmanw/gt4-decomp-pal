extern "C" void func_0015F3E8(void *a);
extern "C" void func_0015F390(void *a, int in_chrg);
extern "C" void *func_0017FB50(void *b, void *name);
extern "C" void func_0017FAF8(void *b, int in_chrg);
extern "C" void func_0043ACE8(void *dst, void *src);
extern "C" void func_00436930(void *obj);

struct Node {
    char pad0[0x10];
    void *obj;
};

struct Handle {
    Node *p;
    int pad[3];
    void *get() { return p->obj; }
};

extern "C" void MGame__setOption(void *arg0, void *arg1, int count, void *name)
{
    if (count > 0) {
        Handle a;
        Handle b;
        func_0015F3E8(&a);
        func_0017FB50(&b, name);
        func_0043ACE8(a.get(), b.get());
        func_00436930(b.get());
        func_0017FAF8(&b, 2);
        func_0015F390(&a, 2);
    }
}
