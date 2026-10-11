typedef int s32;

struct Obj { char pad[0x104]; s32 unk104; };

extern "C" s32 func_002B7930(s32 arg0);

extern "C" s32 func_002459E8(Obj *arg0) {
    return func_002B7930(arg0->unk104);
}
