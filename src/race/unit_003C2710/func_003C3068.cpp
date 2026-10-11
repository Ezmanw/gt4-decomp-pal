typedef int s32;
typedef unsigned int u32;

extern "C" void func_003C3030(s32 arg0, u32 arg1);

extern "C" void func_003C3068(void) {
    func_003C3030(1, 0xFFFF);
}
