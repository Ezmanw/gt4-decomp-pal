typedef int s32;
typedef unsigned int u32;

extern "C" void func_001B91E0(s32 arg0, u32 arg1);

extern "C" void func_001B98E0(void) {
    func_001B91E0(1, 0xFFFF);
}
