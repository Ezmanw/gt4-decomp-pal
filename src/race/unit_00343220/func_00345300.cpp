typedef float f32;

struct Obj { char pad[0x65C]; f32 unk65C; };

extern "C" f32 func_00345300(Obj *arg0) {
    return arg0->unk65C;
}
