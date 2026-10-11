typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 hThread__ClassID_;

extern "C" void func_003187D8(void) {
    hThread__ClassID_ = func_003250F0();
}
