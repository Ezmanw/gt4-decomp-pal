typedef int s32;
typedef unsigned int u32;

extern "C" void func_002DD028(s32 arg0, u32 arg1);

extern "C" void func_002DD748(void) {
    func_002DD028(0, 0xFFFF);
}
