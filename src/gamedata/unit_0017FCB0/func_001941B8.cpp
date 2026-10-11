typedef float f32;

struct S { char pad[0x124]; f32 unk124; };

extern "C" void func_001941B8(S *arg0, f32 arg1) {
    arg0->unk124 = arg1;
}
