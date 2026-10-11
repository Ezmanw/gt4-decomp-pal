typedef float f32;

struct Obj { char pad[0xCC]; f32 unkCC; };

extern "C" f32 func_002390E8(Obj *arg0) {
    return arg0->unkCC;
}
