struct Entry { int m0; short x, y, z; short pad; int mC; };
struct Data { char pad[0x1C]; Entry *entries; };
struct Obj { int m0; Data *data; };
extern "C" int func_0042A598(Obj *);

extern "C" void func_00427CA8(Obj *, int, int, int, float, int, float);

extern "C" void func_00427DE8(Obj *o, int idx, float a, int arg, float b)
{
    if (!func_0042A598(o)) return;
    if (!o->data) return;
    func_00427CA8(o, o->data->entries[idx].x, o->data->entries[idx].y, o->data->entries[idx].z, a, arg, b);
}
