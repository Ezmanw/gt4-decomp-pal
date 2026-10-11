struct Res;
extern "C" void func_00328700(Res *r); /* add a reference */
extern "C" void func_00328750(Res *r); /* drop a reference */

/* A reference-counting pointer, named after its destructor (func_003094D0) so that
   _$_13func_00309378 resolves. */
struct func_003094D0 {
    Res *p;
    func_003094D0(const func_003094D0 &o);
    ~func_003094D0();
    func_003094D0 &operator=(const func_003094D0 &o)
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

struct Key {
    int id;
    Key(int i) : id(i) {}
};

extern "C" func_003094D0 func_003094A0(const Key &k);

extern "C" void hObject__evaluate(int v, func_003094D0 *out)
{
    *out = func_003094A0(Key(v));
}
