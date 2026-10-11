typedef float f32;

struct Obj { char pad[0x94]; f32 unk94; };

extern "C" f32 func_0044FEB8(Obj *arg0) {
    return arg0->unk94;
}
