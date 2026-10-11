typedef int s32;

struct Obj {
    char pad[0x180];
    s32 unk180;
};

extern "C" void func_0037BF38(struct Obj *arg0, s32 arg1);

extern "C" void func_0037BF18(struct Obj *arg0, s32 arg1) {
    arg0->unk180 = arg1;
    func_0037BF38(arg0, 0);
}
