typedef int s32;
typedef unsigned int u32;

extern "C" void func_002002F8(s32 arg0, u32 arg1);

extern "C" void func_002009F8(void) {
    func_002002F8(1, 0xFFFF);
}
