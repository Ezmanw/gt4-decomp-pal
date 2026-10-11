/* compiler: ee-gcc2.96-no-strict-aliasing */
struct Src { char pad[0xF8A0]; int count; };
struct Obj { Src *src; int count; int m8; };
void func_0045C4D0(Obj *, float);
void func_0045BD50(Obj *, int);
void func_0045BEB8(Obj *);

extern "C" void func_0045BC98(Obj *o, Src *src, int m8)
{
    func_0045C4D0(o, 0.0f);
    o->m8 = m8;
    o->src = src;
    o->count = src->count;
    for (int i = 0; i < o->count; i++) func_0045BD50(o, i);
    return func_0045BEB8(o);
}
