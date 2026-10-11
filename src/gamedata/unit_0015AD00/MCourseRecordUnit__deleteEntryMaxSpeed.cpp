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

extern "C" void func_0015AAC8(void *);
extern "C" void func_002FCA20(void *, void *);
extern "C" s32 func_002FE3A8(s32);
extern "C" void func_004337C8(s32, s32);
extern "C" void func_002FC9C8(void *, s32);
extern "C" void func_0015AA70(void *, s32);

extern "C" void MCourseRecordUnit__deleteEntryMaxSpeed(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s0;
    s32 v_s1;
    if (arg2 > 0) {
        func_0015AAC8(buf0);
        p_s0 = buf1;
        func_002FCA20(p_s0, arg3);
        v_s1 = *(s32 *)((char *)buf0[0] + 0x10);
        func_004337C8(v_s1, func_002FE3A8(*p_s0));
        func_002FC9C8(p_s0, 0x2);
        func_0015AA70(buf0, 0x2);
    }
}
