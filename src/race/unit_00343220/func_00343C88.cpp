typedef int s32;

struct Obj {
    char pad0[4];
    s32 unk4;
};

extern "C" s32 func_0034C370(s32 arg0);

extern "C" s32 func_00343C88(Obj *arg0)
{
    return func_0034C370(arg0->unk4);
}
