typedef int s32;

struct Obj {
    char pad0[0xC];
    s32 h;
};

extern "C" void func_003094A0(void *arg0, s32 *arg1);
extern "C" void func_003094D0(void *arg0, int arg1);
extern "C" void RefCounter__cleanup(Obj *self);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void hStaticValue__cleanup(Obj *self) {
    s32 buf[4];
    s32 zero;
    s32 *dst;
    s32 newVal;
    s32 oldVal;
    RefCounter__cleanup(self);
    zero = 0;
    func_003094A0(buf, &zero);
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
    func_003094D0(buf, 2);
}
