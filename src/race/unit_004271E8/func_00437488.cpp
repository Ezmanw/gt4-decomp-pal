typedef int s32;
extern "C" void func_00439540(char *a, s32 b, s32 c);
extern "C" void func_00437488(char *arg0, s32 arg1) {
    *(s32 *)(arg0 + 0x14) = arg1;
    func_00439540(arg0 + 0x24, arg1, *(s32 *)(arg0 + 0x1388) == 1);
}
