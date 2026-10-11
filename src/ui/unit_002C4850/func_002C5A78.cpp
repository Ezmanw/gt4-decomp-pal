typedef int s32;

struct S { char pad[8]; s32 unk8; };

extern "C" s32 func_002C5A78(S *arg0) {
    return arg0->unk8;
}
