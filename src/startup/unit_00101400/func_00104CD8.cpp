struct Vec4 { float x, y, z, w; };
struct Obj { char pad[0x3C]; float radius; };
extern "C" Vec4 func_00104200(Obj *o);

extern "C" Vec4 func_00104CD8(Obj *o)
{
    Vec4 v = func_00104200(o);
    v.w = o->radius;
    return v;
}
