typedef int s32;

struct S { char pad[0x1D48]; s32 unk1D48; };

extern "C" s32 func_00230820(S *arg0) {
    return arg0->unk1D48;
}
