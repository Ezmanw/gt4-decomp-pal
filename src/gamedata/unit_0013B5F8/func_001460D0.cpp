typedef int s32;

struct Struct_001460C8 {
    char pad0[0x14];
    s32 unk14;
};

extern "C" s32 func_004415C0(s32 arg0);
extern "C" s32 func_00446260(s32 arg0);
extern "C" void func_00145FF0(void *arg0, s32 arg1, s32 arg2, s32 arg3);

extern "C" void func_001460D0(Struct_001460C8 *arg0, s32 arg1, s32 arg2) {
    s32 temp = func_004415C0(arg0->unk14);
    temp = func_00446260(temp);
    func_00145FF0(arg0, arg1, arg2, temp);
}
