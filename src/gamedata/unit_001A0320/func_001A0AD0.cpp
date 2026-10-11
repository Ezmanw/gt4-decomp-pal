typedef int s32;
typedef unsigned int u32;

extern "C" void func_001A03B0(s32 arg0, u32 arg1);

extern "C" void func_001A0AD0(void) {
    func_001A03B0(0, 0xFFFF);
}
