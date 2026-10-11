typedef int s32;

extern "C" s32 func_0043C578(s32 arg0);
extern "C" s32 func_0043C9E8(s32 arg0, s32 arg1);
extern "C" s32 func_0043CCE0(s32 arg0, s32 arg1);
extern "C" s32 func_0043D000(s32 arg0, s32 arg1);

extern "C" s32 func_0043DC68(s32 arg0) {
    s32 s0 = arg0;
    s32 v0;

    v0 = func_0043C578(s0 + 0x18);
    v0 = func_0043C9E8(s0 + 0x48, v0);
    v0 = func_0043CCE0(s0 + 0x64, v0);
    return func_0043D000(s0 + 0x8C, v0);
}
