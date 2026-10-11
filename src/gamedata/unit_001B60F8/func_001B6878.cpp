typedef int s32;
typedef unsigned int u32;

extern "C" void func_001B6178(s32 arg0, u32 arg1);

extern "C" void func_001B6878(void) {
    func_001B6178(1, 0xFFFF);
}
