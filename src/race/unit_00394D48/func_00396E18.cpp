typedef int s32;
typedef float f32;

struct Obj_00396B20 {
    char pad0[0xD8];
    s32 mD8;
};

extern "C" void func_00456B98(s32 on);
extern "C" void func_00396E78(Obj_00396B20 *o, s32 a, s32 b, f32 lo, f32 hi);

extern "C" void func_00396E18(Obj_00396B20 *o, s32 b) {
    func_00456B98(0);
    func_00396E78(o, o->mD8, b, 0x1.a36e2ep-14f, 1000.0f);
    func_00456B98(1);
}
