typedef int s32;

extern "C" s32 func_00444720(s32 arg0, s32 arg1);
extern "C" void func_00444628(s32 arg0, s32 arg1);

extern "C" s32 func_004445F0(s32 arg0, s32 arg1) {
    func_00444628(arg0, arg1);
    return func_00444720(arg0, arg1);
}
