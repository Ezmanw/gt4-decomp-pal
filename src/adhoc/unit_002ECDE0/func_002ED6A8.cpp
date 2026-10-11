typedef int s32;
typedef unsigned int u32;

extern "C" void func_002ED008(s32 arg0, u32 arg1);

extern "C" void func_002ED6A8(void) {
    func_002ED008(1, 0xFFFF);
}
