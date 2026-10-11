typedef float f32;

struct Obj { char pad[0x10]; f32 unk10; };

extern "C" void func_0040D280(Obj **arg0, f32 fparg0) {
    (*arg0)->unk10 = fparg0;
}
