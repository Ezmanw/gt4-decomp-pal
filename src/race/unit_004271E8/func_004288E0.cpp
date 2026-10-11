struct Entry { int m0; short x, y, z; short pad; int mC; };
struct Data { char pad[0x1C]; Entry *entries; };
struct Obj { int m0; Data *data; };
extern "C" int func_0042A598(Obj *);

extern "C" void func_004287C0(Obj *, int, int, int, int, float, int, float);

extern "C" void func_004288E0(Obj *o, int idx, float a, int arg, float b)
{
    if (!func_0042A598(o)) return;
    if (!o->data) return;
    func_004287C0(o, o->data->entries[idx].x, o->data->entries[idx].y, o->data->entries[idx].z, 0, a, arg, b);
}
