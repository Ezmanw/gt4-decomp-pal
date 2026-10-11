extern "C" void *func_0023DFA0(void *h);
extern "C" void func_0023DF48(void *h, int in_chrg);
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
    char pad0[0x14];
    Ref ref;
};

struct Handle {
    Owner *p;
    int pad[3];
};

extern "C" void MSound__get_stream(Ref *out)
{
    Handle h;
    func_0023DFA0(&h);
    out->assign(h.p->ref);
    func_0023DF48(&h, 2);
}
