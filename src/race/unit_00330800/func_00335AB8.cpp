typedef int s32;

extern "C" void func_004623D0(s32 arg0);

extern s32 D_008434F0;

extern "C" void func_00335AB8(void) {
    D_008434F0 = 0x12345678;
    func_004623D0(1);
}
