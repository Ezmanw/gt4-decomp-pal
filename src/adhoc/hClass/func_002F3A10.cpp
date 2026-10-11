typedef int s32;

extern "C" void func_002F38E8(s32 arg0, s32 *arg1);
extern "C" s32 HSymID__GetID(s32 arg0);

extern "C" void func_002F3A10(s32 arg0, s32 arg1) {
    s32 s0 = arg0;
    s32 local = HSymID__GetID(arg1);

    func_002F38E8(s0, &local);
}
