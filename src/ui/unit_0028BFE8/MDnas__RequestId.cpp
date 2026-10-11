typedef int s32;

extern "C" void func_0028BEA8(void *arg0, int arg1);
extern "C" void func_0028BF00(void *arg0, void *arg1);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FE3D0(void *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" s32 func_0032EFD0(char *arg0);

extern "C" void MDnas__RequestId(s32 *arg0, void *arg1) {
    s32 buf0[4];
    char *buf1[4];
    char **p1 = buf1;
    s32 newVal;
    s32 oldVal;
    func_0028BF00(p1, arg1);
    func_002FE3D0(buf0, func_0032EFD0(*p1 + 0x10) != 0);
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
    func_0028BEA8(p1, 2);
}
