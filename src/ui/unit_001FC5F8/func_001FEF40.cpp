typedef int s32;
typedef unsigned int u32;

extern "C" void func_001FE820(s32 arg0, u32 arg1);

extern "C" void func_001FEF40(void) {
    func_001FE820(0, 0xFFFF);
}
