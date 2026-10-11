typedef int s32;

extern "C" void func_003299B0(s32 *arg0, s32 arg1);

extern "C" s32 func_0032A8E8(s32 arg0, s32 arg1) {
    s32 local = arg1;

    func_003299B0(&local, arg0);
    return local;
}
