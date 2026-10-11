typedef int s32;
typedef short s16;
typedef unsigned short u16;
typedef signed char s8;
typedef unsigned char u8;
typedef long s64;
typedef float f32;

struct Rep {
    s32 len;
    s32 cap;
    s32 ref;
    s32 sel;
};

struct Str {
    char *p;
    char pad[0xC];
};

struct S00659988 {
    const char *name;
};

extern "C" void func_0016D850(void *);
extern "C" void func_0016D7F8(void *, s32);
extern "C" s32 func_00435C98(s32);
extern "C" void func_002FE3D0(void *, s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_002FC9C8(void *, s32);

extern "C" void MGarage__isFull(s32 *arg0) {
    s32 buf0[4];
    s32 v_s0;
    s32 newVal;
    s32 oldVal;
    func_0016D850(buf0);
    v_s0 = *(s32 *)((char *)buf0[0] + 0x10);
    func_0016D7F8(buf0, 0x2);
    func_002FE3D0(buf0, !(func_00435C98(v_s0) < 0x3e8));
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
    func_002FC9C8(buf0, 0x2);
}
