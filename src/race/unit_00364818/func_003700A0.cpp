typedef float f32;

struct Obj {
    char pad[0x1C];
    f32 unk1C;
};

extern "C" f32 func_00370048(Obj *arg0);

extern "C" void func_003700A0(Obj *arg0) {
    arg0->unk1C = func_00370048(arg0);
}
