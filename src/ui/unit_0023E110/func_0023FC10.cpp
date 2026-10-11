struct Target;
extern "C" void func_002C3CB8(Target *t, int a);
extern "C" void func_002C3E50(Target *t, int a, int b, int c, float f);

struct Ref {
    Target *p;
    Target *operator->() const { return p; }
    operator Target *() const { return p; }
};

struct Obj {
    char pad[0x14];
    Ref target;
};

extern "C" void func_0023FC10(Obj *o, int a, int b, int c, int d, float f)
{
    func_002C3CB8(o->target, a);
    func_002C3E50(o->target, b, c, d, f);
}
