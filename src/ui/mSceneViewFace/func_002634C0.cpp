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

extern "C" void func_0030BB60(void *);
extern "C" void func_00255268(void *, void *);
extern "C" void func_003094D0(void *, s32);
extern "C" void func_00263428(s32, void *);
extern "C" void func_002551F8(void *, void *);
extern "C" void func_00255210(void *, s32);

extern "C" void * func_002634C0(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 *p_s0;
    p_s0 = buf2;
    func_0030BB60(p_s0);
    func_00255268(buf0, p_s0);
    func_003094D0(p_s0, 0x2);
    func_00263428(buf0[0], arg1);
    func_002551F8(arg0, buf0);
    func_00255210(buf0, 0x2);
    return arg0;
}
