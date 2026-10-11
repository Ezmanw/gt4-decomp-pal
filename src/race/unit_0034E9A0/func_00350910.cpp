typedef float f32;

struct Obj {
    char pad0[0xC];
    f32 unkC;
};

extern "C" void func_003507E0(Obj *arg0);

extern "C" f32 func_00350910(Obj *arg0) {
    func_003507E0(arg0);
    return arg0->unkC;
}
