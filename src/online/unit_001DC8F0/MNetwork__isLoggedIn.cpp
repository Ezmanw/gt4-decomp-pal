typedef int s32;

extern "C" void func_001DC690(s32 *arg0);
extern "C" s32 func_001F15B8(s32 arg0);
extern "C" void func_002FE3D0(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_002FC9C8(s32 *arg0, s32 arg1);
extern "C" void func_001DC638(s32 *arg0, s32 arg1);

extern "C" void MNetwork__isLoggedIn(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p1 = buf1;
    s32 newVal;
    s32 oldVal;

    func_001DC690(p1);
    func_002FE3D0(buf0, func_001F15B8(*p1) != 0);
    if (arg0 != buf0) {
        newVal = buf0[0];
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_002FC9C8(buf0, 2);
    func_001DC638(p1, 2);
}
