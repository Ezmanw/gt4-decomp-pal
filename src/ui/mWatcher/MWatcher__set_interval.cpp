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

extern "C" void func_00254268(void *);
extern "C" void func_002FCA20(void *, void *);
extern "C" s32 func_002FE3A8(s32);
extern "C" void func_002549E0(s32, s32);
extern "C" void func_002FC9C8(void *, s32);
extern "C" void func_00254210(void *, s32);

extern "C" void MWatcher__set_interval(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s1;
    s32 v_s0;
    if (arg2 > 0) {
        func_00254268(buf0);
        p_s1 = buf1;
        func_002FCA20(p_s1, arg3);
        v_s0 = buf0[0];
        func_002549E0(v_s0, func_002FE3A8(*p_s1));
        func_002FC9C8(p_s1, 0x2);
        func_00254210(buf0, 0x2);
    }
}
