typedef int s32;

struct Obj {
    char pad0[0x10];
    s32 unk10;
};

extern "C" s32 func_0035A0A0(s32 arg0);

extern "C" s32 func_0035A0B8(Obj *arg0)
{
    return func_0035A0A0(arg0->unk10);
}
