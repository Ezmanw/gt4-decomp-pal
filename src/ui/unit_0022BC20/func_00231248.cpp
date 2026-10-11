extern "C" void func_00328700(void *obj);
extern "C" void func_00328750(void *obj);

struct Ref {
    void *p;
    int pad[3];
    void assign(const Ref &o)
    {
        if (this != &o) {
            void *np = o.p;
            if (np)
                func_00328700(np);
            if (p)
                func_00328750(p);
            p = np;
        }
    }
};

struct Obj {
    char pad0[0x6D8];
    Ref ref;
};

extern "C" void func_0024C930(Ref *r, const int *value);
extern "C" void func_0024C960(Ref *r, int in_chrg);

extern "C" void func_00231248(Obj *self, int value)
{
    Ref *r = &self->ref;
    Ref tmp;
    int v = value;
    func_0024C930(&tmp, &v);
    r->assign(tmp);
    func_0024C960(&tmp, 2);
}
