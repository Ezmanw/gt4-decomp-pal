typedef int s32;

extern "C" void func_002FB2E8(s32 arg0, s32 *arg1);
extern "C" int func_0031E830(int arg0);

extern "C" void func_0031E8B0(s32 arg0) {
    s32 s0 = arg0;
    s32 local = func_0031E830(1);
    func_002FB2E8(s0, &local);
}
