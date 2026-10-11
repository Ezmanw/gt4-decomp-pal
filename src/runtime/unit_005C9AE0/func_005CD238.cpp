typedef int s32;

struct Obj {
    char pad[0x10];
    s32 unk10;
};

extern "C" void func_00439C38(int arg0);

extern "C" void func_005CD238(struct Obj *arg0) {
    func_00439C38(arg0->unk10 + 0x1650);
}
