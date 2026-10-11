extern "C" void func_002F94B8(void *v, float f);
extern "C" void func_002F7CC0(void *v, int in_chrg);
extern "C" void func_00328700(void *obj);
extern "C" void func_00328750(void *obj);

/* Reference-counted script float value handle. */
struct Handle {
    void *p;
    int pad[3];
    void assign(const Handle &o)
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

extern "C" void float__global_0083D750(Handle *h)
{
    Handle tmp;
    func_002F94B8(&tmp, 0.0f);
    h->assign(tmp);
    func_002F7CC0(&tmp, 2);
}
