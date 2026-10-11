typedef int s32;

struct S { char pad[0x970]; s32 unk970; };

extern "C" s32 func_003C15B0(S *arg0) {
    return arg0->unk970;
}
