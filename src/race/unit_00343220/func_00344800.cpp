typedef float f32;

struct Obj { char pad[0x598]; f32 unk598; };

extern "C" f32 func_00344800(Obj *arg0) {
    return arg0->unk598;
}
