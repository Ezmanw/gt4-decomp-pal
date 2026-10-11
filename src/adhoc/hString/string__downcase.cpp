typedef int s32;

extern "C" void func_003124C8(s32 *arg0);
extern "C" void func_00315160(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_00312470(s32 *arg0, s32 arg1);
extern "C" void func_00312470(s32 *arg0, s32 arg1);

extern "C" void string__downcase(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p1 = buf1;
    s32 newVal;
    s32 oldVal;

    func_003124C8(p1);
    func_00315160(buf0, *p1);
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
    func_00312470(buf0, 2);
    func_00312470(p1, 2);
}
