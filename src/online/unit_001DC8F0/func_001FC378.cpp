typedef int s32;
typedef unsigned int u32;

extern "C" void func_001FBC78(s32 arg0, u32 arg1);

extern "C" void func_001FC378(void) {
    func_001FBC78(1, 0xFFFF);
}
