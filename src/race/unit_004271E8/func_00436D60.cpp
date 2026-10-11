typedef int s32;

struct Obj {
    char pad0[0x10D8];
    s32 unk10D8;
};

extern "C" s32 func_004305E8(s32 arg0);

extern "C" s32 func_00436D60(Obj *arg0)
{
    return func_004305E8(arg0->unk10D8);
}
