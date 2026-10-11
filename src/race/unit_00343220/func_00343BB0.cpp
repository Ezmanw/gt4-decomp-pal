typedef unsigned char u8;
typedef float f32;

struct Struct_00343A58 {
    char pad0[0x14];
    u8 unk14;
};

extern "C" void func_00343AD0(Struct_00343A58 *arg0, f32 arg1);

extern "C" void func_00343BB0(Struct_00343A58 *arg0) {
    if (arg0->unk14 == 0) {
        return func_00343AD0(arg0, 0.0f);
    }
}
