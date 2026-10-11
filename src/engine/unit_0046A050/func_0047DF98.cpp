typedef float f32;

struct S { char pad[0x38]; f32 unk38; };

extern "C" void func_0047DF98(S *arg0, f32 arg1) {
    arg0->unk38 = arg1;
}
