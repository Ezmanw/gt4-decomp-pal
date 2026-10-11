typedef int s32;
typedef unsigned int u32;

extern "C" void func_003EBA50(s32 arg0, u32 arg1);

extern "C" void func_003EBA90(void) {
    func_003EBA50(1, 0xFFFF);
}
