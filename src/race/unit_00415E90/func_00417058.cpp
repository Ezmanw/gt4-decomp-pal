typedef int s32;

extern "C" s32 func_00417090(s32 arg0, s32 arg1);
extern "C" void func_00419260(s32 arg0, s32 arg1);

extern "C" s32 func_00417058(s32 arg0, s32 arg1) {
    func_00419260(arg0, arg1);
    return func_00417090(arg0, arg1);
}
