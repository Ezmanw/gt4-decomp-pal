typedef int s32;
typedef unsigned int u32;

extern "C" void func_002C2260(s32 arg0, u32 arg1);

extern "C" void func_002C2960(void) {
    func_002C2260(1, 0xFFFF);
}
