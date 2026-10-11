typedef int s32;

extern "C" void func_0016D850(s32 *arg0);
extern "C" void func_00170280(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_002ED718(s32 *arg0, s32 arg1);
extern "C" void func_0016D7F8(s32 *arg0, s32 arg1);

extern "C" void MGarage__pickupCountry(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p1 = buf1;
    s32 newVal;
    s32 oldVal;

    func_0016D850(p1);
    func_00170280(buf0, *p1);
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
    func_002ED718(buf0, 2);
    func_0016D7F8(p1, 2);
}
