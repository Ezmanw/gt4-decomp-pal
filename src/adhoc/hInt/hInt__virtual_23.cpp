typedef int s32;
struct VEntry { short delta; short index; s32 (*fn)(void *); };
struct VObj { char pad0[4]; char *vtbl; };
static inline s32 vcall(char *o) {
    VEntry *e = (VEntry *)(((VObj *)o)->vtbl + 0x58);
    return e->fn(o + e->delta);
}
extern "C" void func_002FE3D0(void *, s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_002FC9C8(void *, s32);

struct Self {
    char pad0[0x10];
    s32 value;
};

extern "C" void hInt__virtual_23(Self *self, s32 *result, s32 a2, s32 a3, char **other) {
    s32 buf[4];
    s32 v = vcall(*other);
    func_002FE3D0(buf, self->value * v);
    if (result != buf) {
        s32 newVal = buf[0];
        if (newVal != 0) {
            func_00328700(newVal);
        }
        s32 oldVal = *result;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *result = newVal;
    }
    func_002FC9C8(buf, 2);
}
