typedef int s32;
typedef unsigned int u32;

extern "C" void func_001C59F0(s32 arg0, u32 arg1);

extern "C" void func_001C5B08(void) {
    func_001C59F0(1, 0xFFFF);
}
