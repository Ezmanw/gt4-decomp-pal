typedef float f32;
typedef int s32;

struct Obj {
    char pad[0x34];
    f32 unk34;
};

extern "C" s32 func_00370270(f32 arg0);

extern "C" s32 func_003703D8(Obj *arg0) {
    return func_00370270(arg0->unk34);
}
