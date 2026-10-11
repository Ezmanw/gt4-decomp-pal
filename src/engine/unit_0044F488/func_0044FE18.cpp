typedef float f32;

struct Obj { char pad[0x7C]; f32 unk7C; };

extern "C" f32 func_0044FE18(Obj *arg0) {
    return arg0->unk7C;
}
