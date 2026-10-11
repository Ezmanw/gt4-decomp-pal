typedef int s32;

struct Obj {
    char pad0[0x6D8];
    s32 h;
};

extern "C" void func_0024C930(void *arg0, s32 *arg1);
extern "C" void func_0024C960(void *arg0, int arg1);
extern "C" void func_0022F7F8(Obj *self);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void func_0022FCB8(Obj *self) {
    s32 buf[4];
    s32 zero;
    s32 *dst;
    s32 newVal;
    s32 oldVal;
    func_0022F7F8(self);
    zero = 0;
    func_0024C930(buf, &zero);
    dst = &self->h;
    if (dst != buf) {
        newVal = buf[0];
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *dst;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *dst = newVal;
    }
    func_0024C960(buf, 2);
}
