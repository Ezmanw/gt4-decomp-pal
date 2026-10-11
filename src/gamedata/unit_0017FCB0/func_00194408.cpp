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

extern "C" void func_002FE3D0(void *, s32);
extern "C" void func_0020D7F8(void *, void *, s32, void *, s32);
extern "C" void func_00231AF8(void *, void *);
extern "C" void func_0020D278(void *, s32);
extern "C" void func_002FC9C8(void *, s32);

extern "C" void func_00194408(s32 *arg0, void *arg1, s32 arg2) {
    s32 buf0[4];
    s32 buf1[4];
    char *v_s2;
    s32 *p_s0;
    v_s2 = (char *)arg0 + 0xe4;
    if (*(s32 *)(char *)v_s2 != 0) {
        func_002FE3D0(buf0, arg2 != 0);
        p_s0 = buf1;
        func_0020D7F8(p_s0, v_s2, 0x2, arg1, buf0[0]);
        func_00231AF8(arg1, p_s0);
        func_0020D278(p_s0, 0x2);
        func_002FC9C8(buf0, 0x2);
    }
}
