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

extern char D_0083EF28[];
extern "C" void func_002ECF38(void *);
extern "C" void func_002EC3B8(void *, s32, void *);
extern "C" void func_00305F50(void *, void *, void *);
extern "C" void func_00304310(void *, s32);
extern "C" void func_002EA6E8(void *, s32);

extern "C" void func_00305ED0(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s0;
    func_002ECF38(buf0);
    p_s0 = buf1;
    func_002EC3B8(p_s0, buf0[0], arg1);
    func_00305F50(arg0, p_s0, &D_0083EF28);
    func_00304310(p_s0, 0x2);
    func_002EA6E8(buf0, 0x2);
}
