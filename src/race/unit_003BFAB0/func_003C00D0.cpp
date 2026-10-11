typedef int s32;

struct Obj {
    char pad0[0x70];
    s32 unk70;
};

extern "C" void func_003C0088(Obj *arg0);

extern "C" void func_003C00D0(Obj *arg0, s32 arg1) {
    func_003C0088(arg0);
    arg0->unk70 = arg1;
}
