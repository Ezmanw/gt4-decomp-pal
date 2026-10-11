typedef int s32;

struct Obj {
    char pad0[0x10];
    s32 unk10;
};

extern "C" s32 func_00431098(s32 arg0);

extern "C" s32 func_001A6E50(Obj *arg0)
{
    return func_00431098(arg0->unk10);
}
