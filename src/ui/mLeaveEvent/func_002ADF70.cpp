typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mLeaveEvent__ClassID_;

extern "C" void func_002ADF70(void) {
    mLeaveEvent__ClassID_ = func_003250F0();
}
