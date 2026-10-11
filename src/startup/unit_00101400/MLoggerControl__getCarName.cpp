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

extern "C" void func_00123840(void *);
extern "C" void func_002FCA20(void *, void *);
extern "C" s32 func_002FE3A8(s32);
extern "C" void func_002FC9C8(void *, s32);
extern "C" void func_00120240(void *, s32, s32);
extern "C" void func_00314C78(void *, void *);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_00312470(void *, s32);
extern "C" struct S00659988 * func_005C11A8(void);
extern "C" void func_003268F0(void *, s32, s32, const char *);
extern "C" void func_001237E8(void *, s32);

static inline void str_release(Str *s) {
    Rep *q = (Rep *)(s->p - 0x10);
    if (--q->ref == 0) {
        s32 size = q->cap + 0x10;
        func_003268F0(q, size, 4, func_005C11A8()->name);
    }
}

extern "C" void MLoggerControl__getCarName(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    Str s2;
    s32 *p_s1;
    s32 v_s0;
    Str *p_s3;
    s32 newVal;
    s32 oldVal;
    if (arg2 > 0) {
        func_00123840(buf0);
        p_s1 = buf1;
        func_002FCA20(p_s1, arg3);
        v_s0 = func_002FE3A8(*p_s1);
        func_002FC9C8(p_s1, 0x2);
        p_s3 = &s2;
        func_00120240(p_s3, buf0[0], v_s0);
        func_00314C78(p_s1, p_s3);
        if (arg0 != p_s1) {
            newVal = *p_s1;
            if (newVal != 0) {
                func_00328700(newVal);
            }
            oldVal = *arg0;
            if (oldVal != 0) {
                func_00328750(oldVal);
            }
            *arg0 = newVal;
        }
        func_00312470(p_s1, 0x2);
        str_release(p_s3);
        func_001237E8(buf0, 0x2);
    }
}
