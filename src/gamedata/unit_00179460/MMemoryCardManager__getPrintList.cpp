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

struct Source {
    char pad0[0x20];
    void *value;
};

extern "C" Source *func_001D3A88(void);
extern "C" void func_0017E548(Ref *r, void *value);
extern "C" void func_0017D290(Ref *r, int in_chrg);

extern "C" void MMemoryCardManager__getPrintList(Ref *out)
{
    Ref tmp;
    func_0017E548(&tmp, func_001D3A88()->value);
    out->assign(tmp);
    func_0017D290(&tmp, 2);
}
