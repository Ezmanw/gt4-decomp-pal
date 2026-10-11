typedef int s32;

extern "C" void func_003094A0(s32 arg0, s32 *arg1);
extern "C" s32 func_002CBF28(s32 arg0);

extern "C" void func_002CC028(s32 arg0, s32 arg1) {
    s32 s0 = arg0;
    s32 local = func_002CBF28(0);

    func_003094A0(s0, &local);
}
