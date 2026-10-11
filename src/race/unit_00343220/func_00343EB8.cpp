typedef float f32;
typedef int s32;

struct Obj {
    char pad[0x590];
    f32 unk590;
};

extern "C" s32 func_00343E50(Obj *arg0);

extern "C" s32 func_00343EB8(Obj *arg0, f32 fparg0) {
    arg0->unk590 = fparg0;
    return func_00343E50(arg0);
}
