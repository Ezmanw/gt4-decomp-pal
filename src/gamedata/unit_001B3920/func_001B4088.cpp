typedef int s32;
typedef unsigned int u32;

extern "C" void func_001B3968(s32 arg0, u32 arg1);

extern "C" void func_001B4088(void) {
    func_001B3968(0, 0xFFFF);
}
