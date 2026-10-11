typedef int s32;

struct S_002321F0 {
    char pad[0x1D58];
    s32 unk1D58;
};

extern "C" void func_002C6B20(s32 arg0, void *arg1);

extern "C" void func_00232348(struct S_002321F0 *arg0) {
    func_002C6B20(arg0->unk1D58, arg0);
}
