typedef float f32;

struct Obj {
    char pad[0x3C];
    f32 unk3C;
};

extern "C" f32 func_003702C0(Obj *arg0, f32 arg1);

extern "C" f32 func_003703F0(Obj *arg0) {
    return func_003702C0(arg0, arg0->unk3C);
}
