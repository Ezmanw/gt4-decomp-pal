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

extern "C" void func_002F9CE8(void *, void *);
extern "C" void func_003094B8(void *, void *);
extern "C" void func_001D6F18(void *, void *);
extern "C" void func_001D9CD0(s32, void *, void *);
extern "C" void func_001D6EC0(void *, s32);
extern "C" void func_003094D0(void *, s32);
extern "C" void func_002F9C90(void *, s32);

extern "C" void MHttp__setEntityCB(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 *p_s1;
    s32 *p_s0;
    if (arg2 >= 0x2) {
        func_002F9CE8(buf0, arg3);
        p_s1 = buf1;
        func_003094B8(p_s1, (char *)arg3 + 0x4);
        p_s0 = buf2;
        func_001D6F18(p_s0, arg1);
        func_001D9CD0(*p_s0, buf0, p_s1);
        func_001D6EC0(p_s0, 0x2);
        func_003094D0(p_s1, 0x2);
        func_002F9C90(buf0, 0x2);
    }
}
