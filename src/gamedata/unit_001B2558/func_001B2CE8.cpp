typedef int s32;
typedef unsigned int u32;

extern "C" void func_001B25E8(s32 arg0, u32 arg1);

extern "C" void func_001B2CE8(void) {
    func_001B25E8(1, 0xFFFF);
}
