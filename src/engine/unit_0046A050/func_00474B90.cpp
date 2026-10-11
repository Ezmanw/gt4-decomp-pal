struct Obj {
    char pad[0x6E14];
    int handle;
    char pad2[0x18];
    int depth;
};

extern "C" void func_004749C0(Obj *o, int a, int b, int c, int d);
extern "C" void func_004739D0(int handle);

extern "C" void func_00474B90(Obj *o)
{
    if (--o->depth != 0)
        return func_004749C0(o, 3, 0, 3, 0x80);
    func_004749C0(o, 2, 2, 1, 0);
    func_004739D0(o->handle);
}
