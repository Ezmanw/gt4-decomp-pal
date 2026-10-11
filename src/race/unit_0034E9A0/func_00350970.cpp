typedef float f32;

struct Obj {
    char pad[0x1C];
    f32 unk1C;
};

extern "C" void func_003507E0(Obj *arg0);

extern "C" f32 func_00350970(Obj *arg0) {
    func_003507E0(arg0);
    return arg0->unk1C;
}
