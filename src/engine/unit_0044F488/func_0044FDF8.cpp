typedef float f32;

struct Obj { char pad[0x74]; f32 unk74; };

extern "C" f32 func_0044FDF8(Obj *arg0) {
    return arg0->unk74;
}
