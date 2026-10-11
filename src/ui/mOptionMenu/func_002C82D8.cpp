typedef int s32;

struct Obj {
    char pad[0xD8];
    s32 unkD8;
};

extern "C" s32 func_002C8258(Obj *arg0, s32 arg1);

extern "C" s32 func_002C82D8(Obj *arg0)
{
    return func_002C8258(arg0, arg0->unkD8);
}
