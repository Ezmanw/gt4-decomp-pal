typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 hIO__ClassID_;

extern "C" void func_002FED50(void) {
    hIO__ClassID_ = func_003250F0();
}
