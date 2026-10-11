typedef float f32;
typedef int s32;

struct Obj {
    char pad[0x28];
    f32 unk28;
};

extern "C" s32 func_00370270(f32 arg0);

extern "C" s32 func_003703A8(Obj *arg0) {
    return func_00370270(arg0->unk28);
}
