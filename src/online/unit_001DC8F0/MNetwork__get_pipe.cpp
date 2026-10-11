extern "C" void *func_001DC690(void *h);
extern "C" void func_001DC638(void *h, int in_chrg);
extern "C" void func_00328700(void *obj);
extern "C" void func_00328750(void *obj);

/* Reference-counted pointer with the inline assignment of 002F8B00. */
struct Ref {
    void *p;
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

struct Owner {
    char pad0[0x1C0];
    Ref ref;
};

struct Handle {
    Owner *p;
    int pad[3];
};

extern "C" void MNetwork__get_pipe(Ref *out)
{
    Handle h;
    func_001DC690(&h);
    out->assign(h.p->ref);
    func_001DC638(&h, 2);
}
