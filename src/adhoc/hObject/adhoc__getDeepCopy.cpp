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
};

extern "C" func_003094D0 func_0030BB60(int id);

extern "C" void adhoc__getDeepCopy(func_003094D0 *self, Key *k)
{
    *self = func_0030BB60(k->id);
}
