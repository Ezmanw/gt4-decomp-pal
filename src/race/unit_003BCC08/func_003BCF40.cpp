typedef int s32;
typedef unsigned int u32;

extern "C" void func_003BCF00(s32 arg0, u32 arg1);

extern "C" void func_003BCF40(void) {
    func_003BCF00(1, 0xFFFF);
}
