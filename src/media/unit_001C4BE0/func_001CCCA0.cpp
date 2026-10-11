typedef int s32;

extern "C" void func_001CC500(s32 arg0, s32 arg1);

extern "C" s32 func_001CCCA0(s32 arg0) {
    func_001CC500(arg0, 1);
    return 1;
}
