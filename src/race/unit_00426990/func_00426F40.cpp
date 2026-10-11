typedef int s32;

struct S { char pad[0x198]; s32 unk198; };

extern "C" void func_00426F40(S *arg0) {
    arg0->unk198 = 0;
}
