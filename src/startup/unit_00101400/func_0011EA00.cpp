typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mLoggerControl__ClassID_;

extern "C" void func_0011EA00(void) {
    mLoggerControl__ClassID_ = func_003250F0();
}
