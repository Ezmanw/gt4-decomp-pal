typedef int s32;

struct S { char pad[0x1AC]; s32 unk1AC; };

extern "C" void func_0037C1A8(S *arg0, s32 arg1) {
    arg0->unk1AC = arg1;
}
