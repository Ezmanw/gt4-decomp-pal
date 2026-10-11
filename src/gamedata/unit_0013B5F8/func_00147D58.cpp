typedef int s32;

struct Obj {
    char pad0[0x14];
    s32 unk14;
};

extern "C" void func_00440538(s32 arg0, void *arg1);

extern "C" void func_00147D58(Obj *arg0) {
    func_00440538(arg0->unk14, (char *)arg0 + 0x30);
}
