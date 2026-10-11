typedef float f32;

struct Obj {
    char pad[0xC];
    f32 unkC;
};

extern "C" void func_004A7988(f32 arg0);

extern "C" void func_00454578(struct Obj *arg0) {
    func_004A7988(arg0->unkC);
}
