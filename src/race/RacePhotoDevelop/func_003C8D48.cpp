struct Obj {
    char pad[0x2EF34];
    int active;
    int handle;
};

extern "C" void func_003356B0(int h);
extern "C" void func_003342B0(int h);
extern "C" void func_00335748(int h);

extern "C" void func_003C8D48(Obj *o)
{
    func_003356B0(o->handle);
    if (o->active)
        return func_003342B0(o->handle);
    func_00335748(o->handle);
}
