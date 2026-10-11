typedef int s32;

struct Obj {
    char pad[0x89C];
    s32 unk89C;
};

struct Target;

extern "C" void func_00453378(Target *arg0, s32 arg1, s32 arg2);

extern "C" void func_00156730(Obj *arg0, s32 arg1) {
    s32 t = arg0->unk89C;
    func_00453378((Target *)((char *)arg0 + 0x2A4), arg1, t);
}
