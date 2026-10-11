typedef int s32;

struct Obj {
    char pad0[4];
    s32 unk4;
};

extern "C" s32 func_00344BC8(s32 arg0);

extern "C" s32 func_003D78C0(Obj *arg0)
{
    return func_00344BC8(arg0->unk4);
}
