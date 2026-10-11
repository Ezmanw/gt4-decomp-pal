typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mRaceRecord__ClassID_;

extern "C" void func_001A5E38(void) {
    mRaceRecord__ClassID_ = func_003250F0();
}
