typedef int s32;
typedef unsigned int u32;

extern "C" void func_001BD948(s32 arg0, u32 arg1);

extern "C" void func_001BE048(void) {
    func_001BD948(1, 0xFFFF);
}
