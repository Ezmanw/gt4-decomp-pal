typedef int s32;
typedef unsigned int u32;

extern "C" void func_001C0F08(s32 arg0, u32 arg1);

extern "C" void func_001C1608(void) {
    func_001C0F08(1, 0xFFFF);
}
