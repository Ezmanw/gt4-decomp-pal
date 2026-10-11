typedef int s32;

extern "C" void func_002BAC38(void *arg0, int arg1);
extern "C" void func_002BAC90(void *arg0, void *arg1);
extern "C" s32 func_002BE950(char *arg0);
extern "C" void func_00312470(void *arg0, int arg1);
extern "C" void func_00314C78(void *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MModelFace__getModelSetPath(s32 *arg0, void *arg1, s32 arg2) {
    char *h[4];
    if (arg2 == 0) {
        s32 buf[4];
        s32 *buf0;
        s32 newVal;
        s32 oldVal;
        s32 v;
        func_002BAC90(h, arg1);
        v = func_002BE950(h[0]);
        buf0 = buf;
        func_00314C78(buf0, v);
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
        func_002BAC38(h, 2);
    }
}
