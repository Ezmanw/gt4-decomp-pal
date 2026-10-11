typedef int s32;

struct Obj {
    char pad0[4];
    s32 unk4;
};

extern "C" s32 func_00427AF0(s32 arg0);

extern "C" s32 func_0042A448(Obj *arg0)
{
    return func_00427AF0(arg0->unk4);
}
