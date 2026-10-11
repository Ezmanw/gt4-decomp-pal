typedef int s32;
typedef unsigned int u32;

extern "C" void func_001B6178(s32 arg0, u32 arg1);

extern "C" void func_001B6898(void) {
    func_001B6178(0, 0xFFFF);
}
