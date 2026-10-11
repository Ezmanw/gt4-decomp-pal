typedef int s32;

extern "C" s32 func_0043C4E8(s32 arg0);
extern "C" s32 func_0043C980(s32 arg0, s32 arg1);
extern "C" s32 func_0043CC68(s32 arg0, s32 arg1);
extern "C" s32 func_0043CF88(s32 arg0, s32 arg1);

extern "C" s32 func_0043DC20(s32 arg0) {
    s32 s0 = arg0;
    s32 v0;

    v0 = func_0043C4E8(s0 + 0x18);
    v0 = func_0043C980(s0 + 0x48, v0);
    v0 = func_0043CC68(s0 + 0x64, v0);
    return func_0043CF88(s0 + 0x8C, v0);
}
