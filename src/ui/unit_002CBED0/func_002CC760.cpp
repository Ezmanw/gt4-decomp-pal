typedef int s32;
typedef unsigned int u32;

extern "C" void func_002CC060(s32 arg0, u32 arg1);

extern "C" void func_002CC760(void) {
    func_002CC060(1, 0xFFFF);
}
