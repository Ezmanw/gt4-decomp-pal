typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mSession__ClassID_;

extern "C" void func_002DCDC8(void) {
    mSession__ClassID_ = func_003250F0();
}
