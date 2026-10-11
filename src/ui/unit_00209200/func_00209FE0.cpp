extern "C" void func_00209978(void *h);
extern "C" void func_0020A5A0(void *h, int in_chrg);

struct Handle {
    void *p;
    int pad[3];
    Handle() { func_00209978(this); }
    ~Handle() { func_0020A5A0(this, 2); }
};

struct Ref {
    Ref(const int &v, int flags) __asm__("func_00208FA8");
    Ref(void *p) __asm__("func_0020A990");
    ~Ref();
    void *p;
    int pad[3];
};

Ref func_00209FE0()
{
    Handle h;
    if (h.p == 0)
        return Ref(0, 0);
    return Ref(h.p);
}
