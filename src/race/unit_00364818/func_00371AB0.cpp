typedef int s32;

struct S { char pad[0x78]; s32 unk78; };

extern "C" void func_00371AB0(S *arg0) {
    arg0->unk78 = 0;
}
