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

extern "C" void func_002D8C60(void *);
extern "C" void func_0022AE78(void *, void *);
extern "C" void func_00255268(void *, void *);
extern "C" void func_002F9CE8(void *, void *);
extern "C" void func_002DC158(s32, s32, void *, void *, void *);
extern "C" void func_002F9C90(void *, s32);
extern "C" void func_00255210(void *, s32);
extern "C" void func_0022AE20(void *, s32);
extern "C" void func_002D8C08(void *, s32);

extern "C" void MSelectBox__insertSortChild(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 buf3[4];
    s32 buf4[4];
    s32 *p_s3;
    s32 *p_s2;
    s32 *p_s1;
    s32 *p_s0;
    if (arg2 >= 0x3) {
        func_002D8C60(buf0);
        p_s3 = buf1;
        func_0022AE78(p_s3, arg3);
        p_s2 = buf2;
        func_00255268(p_s2, (char *)arg3 + 0x4);
        p_s1 = buf3;
        func_002F9CE8(p_s1, (char *)arg3 + 0x8);
        p_s0 = buf4;
        func_002F9CE8(p_s0, (char *)arg3 + 0xc);
        func_002DC158(buf0[0], *p_s3, p_s2, p_s1, p_s0);
        func_002F9C90(p_s0, 0x2);
        func_002F9C90(p_s1, 0x2);
        func_00255210(p_s2, 0x2);
        func_0022AE20(p_s3, 0x2);
        func_002D8C08(buf0, 0x2);
    }
}
