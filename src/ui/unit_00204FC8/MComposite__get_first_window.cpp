typedef int s32;

extern "C" void func_00204DF0(void *arg0, int arg1);
extern "C" void func_00204E48(void *arg0, void *arg1);
extern "C" s32 func_002083C8(s32 arg0);
extern "C" void func_003094A0(s32 *arg0, s32 *arg1);
extern "C" void func_003094D0(s32 *arg0, int arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MComposite__get_first_window(s32 *arg0, void *arg1) {
    s32 buf1[4];
    s32 buf0[4];
    s32 temp;
    s32 newVal;
    s32 oldVal;

    func_00204E48(buf1, arg1);
    s32 *ptemp = &temp;
    temp = func_002083C8(buf1[0]);
    s32 *p0 = buf0;
    func_003094A0(p0, ptemp);
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
    func_003094D0(p0, 2);
    func_00204DF0(buf1, 2);
}
