inline void *operator new(unsigned int, void *p) { return p; }
struct func_00472490 {
    func_00472490();
    char d[0x24];
};
struct Group {
    func_00472490 e[3];
};
struct Obj {
    int m0;
    int m4;
    char pad[0x10F8 - 8];
    Group g[2];
};
extern "C" void func_0046D248(Obj *o)
{
    o->m0 = 0;
    o->m4 = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            new (&o->g[i].e[j]) func_00472490;
}
