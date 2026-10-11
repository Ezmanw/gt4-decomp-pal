typedef int s32;
typedef unsigned int u32;

extern "C" void func_002F6080(s32 arg0, u32 arg1);

extern "C" void func_002F6780(void) {
    func_002F6080(1, 0xFFFF);
}
