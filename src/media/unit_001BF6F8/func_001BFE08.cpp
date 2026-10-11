typedef int s32;
typedef unsigned int u32;

extern "C" void func_001BF720(s32 arg0, u32 arg1);

extern "C" void func_001BFE08(void) {
    func_001BF720(1, 0xFFFF);
}
