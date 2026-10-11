typedef int s32;
typedef unsigned int u32;

extern "C" void func_002CB088(s32 arg0, u32 arg1);

extern "C" void func_002CB788(void) {
    func_002CB088(1, 0xFFFF);
}
