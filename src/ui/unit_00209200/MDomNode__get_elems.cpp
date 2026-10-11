typedef int s32;

extern "C" void func_00209030(s32 *arg0);
extern "C" void func_002099E8(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_002ED718(s32 *arg0, s32 arg1);
extern "C" void func_00208FD8(s32 *arg0, s32 arg1);

extern "C" void MDomNode__get_elems(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p1 = buf1;
    s32 newVal;
    s32 oldVal;

    func_00209030(p1);
    func_002099E8(buf0, *p1);
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
    func_00208FD8(p1, 2);
}
