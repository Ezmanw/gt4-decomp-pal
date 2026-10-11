typedef int s32;
typedef unsigned int u32;

extern "C" void func_001C0F08(s32 arg0, u32 arg1);

extern "C" void func_001C1628(void) {
    func_001C0F08(0, 0xFFFF);
}
