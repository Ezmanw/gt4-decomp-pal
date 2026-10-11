struct Res;
extern "C" void func_00328700(Res *r); /* add a reference */
extern "C" void func_00328750(Res *r); /* drop a reference */

/* A reference-counting pointer, named after its destructor (func_00302BD8) so that
   _$_13func_00302A80 resolves. */
struct func_00302BD8 {
    Res *p;
    func_00302BD8(const func_00302BD8 &o);
    ~func_00302BD8();
    func_00302BD8 &operator=(const func_00302BD8 &o)
    {
        if (this != &o) {
            Res *np = o.p;
            if (np)
                func_00328700(np);
            if (p)
                func_00328750(p);
            p = np;
        }
        return *this;
    }
};

extern "C" func_00302BD8 func_00303230(int b, int a);

extern "C" void hMethodValue__virtual_08(int a, func_00302BD8 *out, int b)
{
    *out = func_00303230(b, a);
}
