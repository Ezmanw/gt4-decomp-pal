typedef int s32;
typedef unsigned int u32;

extern "C" void func_001B9D60(s32 arg0, u32 arg1);

extern "C" void func_001BA460(void) {
    func_001B9D60(1, 0xFFFF);
}
