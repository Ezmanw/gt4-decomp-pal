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

extern "C" s32 func_00265E58(void);
extern "C" s32 func_00305778(void *);
extern "C" void func_003042E0(void *, void *);
extern "C" void func_002ECF38(void *);
extern "C" void func_002EB8F8(s32, void *, void *);
extern "C" void func_002EA6E8(void *, s32);
extern "C" void func_002189D0(void *);
extern "C" void func_00304310(void *, s32);

extern "C" void func_00218A88(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 t1;
    s32 *p_s0;
    if (func_00265E58() != 0) {
        t1 = func_00305778(arg0);
        buf2[0] = t1;
        func_003042E0(buf0, buf2);
        p_s0 = buf1;
        func_002ECF38(p_s0);
        func_002EB8F8(*p_s0, arg1, buf0);
        func_002EA6E8(p_s0, 0x2);
        func_002189D0(arg0);
        func_00304310(buf0, 0x2);
    }
}
