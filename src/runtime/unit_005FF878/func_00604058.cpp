typedef int s32;

struct Obj {
    char pad0[8];
    s32 unk8;
};

extern "C" s32 func_004505C8(s32 arg0);

extern "C" s32 func_00604058(Obj *arg0)
{
    return func_004505C8(arg0->unk8);
}
