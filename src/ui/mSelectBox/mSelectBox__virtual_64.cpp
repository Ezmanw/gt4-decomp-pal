typedef int s32;

struct Obj {
    char pad0[0xF4];
    s32 h;
};

extern "C" void func_002F9C60(void *arg0, s32 *arg1);
extern "C" void func_002F9C90(void *arg0, int arg1);
extern "C" void IfWidget__structor_0(Obj *self);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void mSelectBox__virtual_64(Obj *self) {
    s32 buf[4];
    s32 zero;
    s32 *dst;
    s32 newVal;
    s32 oldVal;
    IfWidget__structor_0(self);
    zero = 0;
    func_002F9C60(buf, &zero);
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
    func_002F9C90(buf, 2);
}
