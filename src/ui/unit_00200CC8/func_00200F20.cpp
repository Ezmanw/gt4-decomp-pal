typedef float f32;

struct S { char pad[0xBC]; f32 unkBC; };

extern "C" void func_00200F20(S *arg0, f32 arg1) {
    arg0->unkBC = arg1;
}
