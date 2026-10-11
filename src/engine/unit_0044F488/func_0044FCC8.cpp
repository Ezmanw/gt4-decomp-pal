typedef float f32;

struct Obj { char pad[0x28]; f32 unk28; };

extern "C" f32 func_0044FCC8(Obj *arg0) {
    return arg0->unk28;
}
