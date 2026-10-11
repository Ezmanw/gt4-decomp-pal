typedef int s32;

extern "C" void func_002114C8(void *arg0, int arg1);
extern "C" void func_00211520(void *arg0, void *arg1);
extern "C" s32 func_00213218(s32 arg0);
extern "C" void func_0024E4A0(s32 *arg0, s32 *arg1);
extern "C" void func_0024E4D0(s32 *arg0, int arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MManager__getUpdateContext(s32 *arg0, void *arg1) {
    s32 buf1[4];
    s32 buf0[4];
    s32 temp;
    s32 newVal;
    s32 oldVal;

    func_00211520(buf1, arg1);
    s32 *ptemp = &temp;
    temp = func_00213218(buf1[0]);
    s32 *p0 = buf0;
    func_0024E4A0(p0, ptemp);
    if (arg0 != p0) {
        newVal = *p0;
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_0024E4D0(p0, 2);
    func_002114C8(buf1, 2);
}
