typedef int s32;

struct Obj {
    char pad0[0x14];
    void *unk14;
};

extern "C" s32 func_004415C0(void *arg0);
extern "C" s32 func_00445B80(s32 arg0);

extern "C" void func_00145C10(Obj *arg0) {
    func_00445B80(func_004415C0(arg0->unk14));
}
