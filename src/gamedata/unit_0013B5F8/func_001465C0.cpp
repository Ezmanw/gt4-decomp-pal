typedef int s32;

extern s32 func_004415C0(s32 a);
extern s32 func_00445AB0(s32 a);

struct func_001465C0_arg0 {
    char pad0[0x14];
    s32 unk14;
};

s32 func_001465C0(void *arg0) {
    return func_00445AB0(func_004415C0(((struct func_001465C0_arg0 *)arg0)->unk14));
}
