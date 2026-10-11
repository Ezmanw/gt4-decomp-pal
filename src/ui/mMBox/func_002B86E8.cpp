typedef float f32;

struct Obj { char pad[0xC4]; f32 unkC4; };

extern "C" f32 func_002B86E8(Obj *arg0) {
    return arg0->unkC4;
}
