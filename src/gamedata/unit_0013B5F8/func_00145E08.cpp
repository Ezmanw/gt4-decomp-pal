typedef int s32;

struct Obj {
    char pad[0x14];
    s32 unk14;
};

extern "C" s32 func_004415C0(s32 arg0);
extern "C" s32 func_00445DC8(s32 arg0, s32 arg1);

extern "C" s32 func_00145E08(Obj *arg0, s32 arg1) {
    s32 s0 = arg1;
    s32 v0 = func_004415C0(arg0->unk14);
    return func_00445DC8(v0, s0);
}
