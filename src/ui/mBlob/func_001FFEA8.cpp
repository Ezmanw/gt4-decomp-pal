typedef int s32;

extern "C" s32 func_003250F0(void);
extern s32 mBlob__ClassID_;

extern "C" void func_001FFEA8(void) {
    mBlob__ClassID_ = func_003250F0();
}
