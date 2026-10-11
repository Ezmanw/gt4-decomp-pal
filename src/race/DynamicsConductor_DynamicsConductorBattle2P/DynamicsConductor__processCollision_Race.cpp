typedef int s32;

extern "C" void func_003F4E90(s32 arg0);
extern "C" s32 func_003F4F88(s32 arg0);
extern "C" void func_0045BF38(void *arg0);

extern "C" s32 DynamicsConductor__processCollision_Race(s32 arg0) {
    s32 s0 = arg0;

    func_003F4E90(s0);
    func_0045BF38((void *)(s0 + 0xDA6C));
    return func_003F4F88(s0);
}
