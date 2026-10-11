typedef int s32;
typedef unsigned int u32;

extern "C" void func_001B91E0(s32 arg0, u32 arg1);

extern "C" void func_001B9900(void) {
    func_001B91E0(0, 0xFFFF);
}
