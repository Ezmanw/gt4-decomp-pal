typedef int s32;

extern "C" s32 func_0025A848(s32 arg0);
extern "C" void func_0025AA28(s32 arg0, s32 arg1);

extern "C" s32 func_0025AE40(s32 arg0, s32 arg1) {
    func_0025AA28(arg0, func_0025A848(arg1));
    return arg0;
}
