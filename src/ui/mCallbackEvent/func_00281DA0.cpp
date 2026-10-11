typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mCallbackEvent__ClassID_;

extern "C" void func_00281DA0(void) {
    mCallbackEvent__ClassID_ = func_003250F0();
}
