typedef int s32;

struct Obj {
    char pad[0xBC];
    s32 unkBC;
};

extern "C" s32 func_002DB230(Obj *arg0, s32 arg1);

extern "C" s32 func_002DB288(Obj *arg0)
{
    return func_002DB230(arg0, arg0->unkBC);
}
