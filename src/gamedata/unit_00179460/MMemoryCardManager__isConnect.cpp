typedef int s32;

struct Obj { char pad[0x20]; s32 p20; };

extern "C" s32 *func_00179300(s32 *arg0);
extern "C" s32 func_001D2868(s32 arg0);
extern "C" void func_002FE3D0(s32 *arg0, s32 arg1);
extern "C" void func_002FC9C8(s32 *arg0, int arg1);
extern "C" void func_001792A8(s32 *arg0, int arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MMemoryCardManager__isConnect(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p1;
    s32 n;
    s32 newVal;
    s32 oldVal;

    func_00179300(buf0);
    n = func_001D2868(((Obj *)buf0[0])->p20);
    p1 = buf1;
    func_002FE3D0(p1, n != 0);
    if (arg0 != p1) {
        newVal = *p1;
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_002FC9C8(p1, 2);
    func_001792A8(buf0, 2);
}
