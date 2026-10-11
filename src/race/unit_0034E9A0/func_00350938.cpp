typedef float f32;

struct Obj {
    char pad0[0x14];
    f32 unk14;
};

extern "C" void func_003507E0(struct Obj *arg0);

extern "C" f32 func_00350938(struct Obj *arg0) {
    struct Obj *s0 = arg0;
    func_003507E0(s0);
    return s0->unk14 * 3.0f;
}
