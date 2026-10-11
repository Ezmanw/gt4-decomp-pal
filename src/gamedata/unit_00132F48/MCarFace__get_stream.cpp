extern "C" void *func_00137DC0(void *h);
extern "C" void func_00137D68(void *h, int in_chrg);
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
    char pad0[0x2AC];
    Ref ref;
};

struct Handle {
    Owner *p;
    int pad[3];
};

extern "C" void MCarFace__get_stream(Ref *out)
{
    Handle h;
    func_00137DC0(&h);
    out->assign(h.p->ref);
    func_00137D68(&h, 2);
}
