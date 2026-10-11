typedef int s32;
typedef unsigned int u32;

extern "C" void func_00300C10(s32 arg0, u32 arg1);

extern "C" void func_00301310(void) {
    func_00300C10(1, 0xFFFF);
}
