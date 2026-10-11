typedef int s32;

struct Obj {
    char pad0[4];
    s32 unk4;
};

extern "C" s32 func_004505C8(s32 arg0);

extern "C" s32 func_00604028(Obj *arg0)
{
    return func_004505C8(arg0->unk4);
}
