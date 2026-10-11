struct Vec4 { float x, y, z, w; };
struct Obj { char pad[0x50]; float radius; };
extern "C" Vec4 func_00104200(Obj *o);

extern "C" Vec4 func_00104958(Obj *o)
{
    Vec4 v = func_00104200(o);
    v.w = o->radius;
    return v;
}
