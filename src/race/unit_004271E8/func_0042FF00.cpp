typedef int s32;

struct Obj {
    char pad[8];
    s32 unk8;
};

extern char D_00845C40[];

extern "C" void func_0057B1A8(void *arg0, s32 arg1);

extern "C" void func_0042FF00(Obj *arg0) {
    func_0057B1A8(D_00845C40, arg0->unk8);
}
