typedef int s32;
typedef float f32;

struct Obj {
    char pad0[4];
    s32 unk4;
};

extern "C" s32 func_00351098(s32 arg0);

extern "C" f32 func_003D78D8(Obj *arg0) {
    return (f32)func_00351098(arg0->unk4);
}
