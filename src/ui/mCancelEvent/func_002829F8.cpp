typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mCancelEvent__ClassID_;

extern "C" void func_002829F8(void) {
    mCancelEvent__ClassID_ = func_003250F0();
}
