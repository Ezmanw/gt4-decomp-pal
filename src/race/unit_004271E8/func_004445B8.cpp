typedef int s32;

extern "C" s32 func_004447B8(s32 arg0, s32 arg1);
extern "C" void func_00444628(s32 arg0, s32 arg1);

extern "C" s32 func_004445B8(s32 arg0, s32 arg1) {
    func_00444628(arg0, arg1);
    return func_004447B8(arg0, arg1);
}
