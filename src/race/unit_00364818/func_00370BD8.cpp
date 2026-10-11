typedef int s32;

struct Obj {
    char pad[0x80];
    s32 unk80;
};

extern "C" void func_003707F8(Obj *arg0, void *arg1, s32 arg2);

extern "C" void func_00370BD8(Obj *arg0) {
    func_003707F8(arg0, (char *)arg0 + 0x60, arg0->unk80);
}
