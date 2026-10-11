typedef int s32;
typedef float f32;

struct Obj;

extern "C" f32 func_00231920(struct Obj *arg0);
extern "C" s32 func_00202F68(s32 arg0, f32 arg1);
extern "C" void func_004AA168(s32 arg0);

extern "C" void mRenderContextPS2__virtual_50(struct Obj *arg0, s32 arg1) {
    s32 s0 = arg1;
    f32 f = func_00231920(arg0);

    func_004AA168(func_00202F68(s0, f));
}
