typedef int s32;

struct Obj {
    char pad[0x4C];
    s32 unk4C;
};

extern "C" s32 func_003DA038(Obj *a0, s32 a1);

extern "C" s32 func_003DA098(Obj *arg0) {
    s32 temp_a1 = arg0->unk4C + 1;
    return func_003DA038(arg0, (temp_a1 >= 5) ? 4 : temp_a1);
}
