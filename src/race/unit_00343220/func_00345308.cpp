typedef float f32;

struct Obj { char pad[0x664]; f32 unk664; };

extern "C" f32 func_00345308(Obj *arg0) {
    return arg0->unk664;
}
