typedef int s32;

struct Obj;

extern "C" void func_003C0F48(struct Obj *arg0, s32 arg1, s32 arg2);
extern "C" void *D_00622F4C;

struct func_0010F850_D_00622F4C {
    char pad0[0x39D78];
    s32 unk39D78;
};

extern "C" void func_0010F850(struct Obj *arg0) {
    s32 v = ((struct func_0010F850_D_00622F4C *)D_00622F4C)->unk39D78;
    func_003C0F48(arg0, v ^ 1, 0);
}
