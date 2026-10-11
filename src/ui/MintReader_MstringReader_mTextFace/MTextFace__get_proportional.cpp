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

struct VEntry_58 { s16 delta; s16 index; s32 (*fn)(void *); };
struct VObj_58 { char pad0[4]; VEntry_58 *vtbl; };
static inline s32 vcall_58(char *o) {
    VEntry_58 *e = (VEntry_58 *)((char *)((VObj_58 *)o)->vtbl + 0x58);
    return e->fn(o + e->delta);
}
extern "C" void * func_00243620(void *);
extern "C" void * func_002FE3D0(void *, s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_002FC9C8(void *, s32);
extern "C" void func_002435C8(void *, s32);

struct func_00244580_v_s0 {
    char pad0[0xB4];
    s32 unkB4;
};

extern "C" void MTextFace__get_proportional(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s2;
    s32 newVal;
    s32 oldVal;
    s32 v_s0;
    if (arg2 == 0) {
        p_s2 = buf1;
        func_00243620(p_s2);
        func_002FE3D0(buf0, *(s32 *)((char *)(*p_s2) + 0xb4) != 0);
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
        func_002435C8(p_s2, 0x2);
    } else {
        if (arg2 == 1) {
            func_00243620(buf0);
            v_s0 = buf0[0];
            ((struct func_00244580_v_s0 *)v_s0)->unkB4 = vcall_58((char *)(*(s32 *)(char *)arg3)) != 0;
            func_002435C8(buf0, 0x2);
        }
    }
}
