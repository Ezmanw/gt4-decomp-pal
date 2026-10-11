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

extern "C" void func_0021DB28(void *);
extern "C" void func_002FCA20(void *, void *);
extern "C" void func_003124C8(void *, void *);
extern "C" s32 func_002FE3A8(s32);
extern "C" s32 func_00314C30(s32);
extern "C" void func_0021F468(s32, s32, s32);
extern "C" void func_00312470(void *, s32);
extern "C" void func_002FC9C8(void *, s32);
extern "C" void func_0021DAD0(void *, s32);

extern "C" void MMovieFace__setFrameHook(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 *p_s2;
    s32 *p_s0;
    s32 v_s3;
    s32 v_s1;
    if (arg2 >= 0x2) {
        func_0021DB28(buf0);
        p_s2 = buf1;
        func_002FCA20(p_s2, arg3);
        p_s0 = buf2;
        func_003124C8(p_s0, (char *)arg3 + 0x4);
        v_s3 = buf0[0];
        v_s1 = func_002FE3A8(*p_s2);
        func_0021F468(v_s3, v_s1, func_00314C30(*p_s0));
        func_00312470(p_s0, 0x2);
        func_002FC9C8(p_s2, 0x2);
        func_0021DAD0(buf0, 0x2);
    }
}
