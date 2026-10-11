typedef int s32;

struct Obj {
    char pad[0x490];
    s32 unk490;
};

extern "C" s32 func_004415D8(Obj *arg0, s32 arg1);

extern "C" s32 func_004415F8(Obj *arg0)
{
    return func_004415D8(arg0, arg0->unk490);
}
