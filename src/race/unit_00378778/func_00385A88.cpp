typedef float f32;

struct Obj { char pad[0x4C]; f32 unk4C; };

extern "C" f32 func_00385A88(Obj *arg0) {
    return arg0->unk4C;
}
