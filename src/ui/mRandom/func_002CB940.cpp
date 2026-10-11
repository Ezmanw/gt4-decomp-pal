typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mRandom__ClassID_;

extern "C" void func_002CB940(void) {
    mRandom__ClassID_ = func_003250F0();
}
