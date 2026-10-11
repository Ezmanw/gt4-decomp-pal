typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mEvent__ClassID_;

extern "C" void func_0028E408(void) {
    mEvent__ClassID_ = func_003250F0();
}
