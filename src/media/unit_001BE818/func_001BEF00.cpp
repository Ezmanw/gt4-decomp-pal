typedef int s32;
typedef unsigned int u32;

extern "C" void func_001BE840(s32 arg0, u32 arg1);

extern "C" void func_001BEF00(void) {
    func_001BE840(0, 0xFFFF);
}
