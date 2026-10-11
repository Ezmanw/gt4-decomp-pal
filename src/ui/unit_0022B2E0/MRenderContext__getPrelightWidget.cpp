typedef int s32;

extern "C" void func_0022AE78(void *, void *);
extern "C" s32 func_0022F4A8(s32);
extern "C" void func_0022AE20(void *, s32);
extern "C" void func_002551E0(void *, s32 *);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_00255210(void *, s32);

extern "C" void MRenderContext__getPrelightWidget(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 v;
    s32 newVal;
    s32 oldVal;
    func_0022AE78(buf0, arg1);
    v = func_0022F4A8(buf0[0]);
    func_0022AE20(buf0, 0x2);
    if (v == 0)
        return;
    buf1[0] = v;
    func_002551E0(buf0, buf1);
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
    func_00255210(buf0, 0x2);
}
