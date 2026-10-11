typedef int s32;
typedef unsigned int u32;

extern "C" void func_001B25E8(s32 arg0, u32 arg1);

extern "C" void func_001B2D08(void) {
    func_001B25E8(0, 0xFFFF);
}
