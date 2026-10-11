typedef int s32;
typedef unsigned short u16;

extern "C" void func_002FFC70(s32 arg0, u16 arg1);

extern "C" s32 func_002FFD80(s32 arg0, s32 arg1) {
    func_002FFC70(arg0, arg1 & 0xFFFF);
    return arg0;
}
