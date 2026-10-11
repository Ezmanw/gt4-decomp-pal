struct Info {
    unsigned char pad;
    unsigned char count;
};

struct Obj {
    char pad[0x10];
    int id;
};

extern "C" Info *func_00359680(int id);
extern "C" void func_00363108(Obj *o, int i);

extern "C" void func_00363258(Obj *o)
{
    Info *info = func_00359680(o->id);
    for (int i = 0; i < info->count; i++)
        func_00363108(o, i);
}
