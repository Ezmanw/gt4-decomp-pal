typedef int s32;
typedef unsigned int u32;

extern "C" void func_00128000(s32 arg0, u32 arg1);

extern "C" void func_00128700(void) {
    func_00128000(1, 0xFFFF);
}
