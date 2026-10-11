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

extern "C" void func_0030BC70(void *);
extern "C" void func_00322020(void *, void *, void *);
extern "C" void func_00306FD8(void *);
extern "C" s32 func_003043B0(void *, void *);
extern "C" s32 func_003221B8(void *);
extern "C" void func_00305F50(s32, void *, void *);
extern "C" void func_00304310(void *, s32);
extern "C" void func_003094D0(void *, s32);

extern "C" void mImport__execute(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s1;
    func_0030BC70(buf0);
    func_00322020(arg1, buf0, (char *)arg0 + 0x8);
    p_s1 = buf1;
    func_00306FD8(p_s1);
    if (func_003043B0(p_s1, buf0) != 0) {
        func_00305F50(func_003221B8(arg1), p_s1, (char *)arg0 + 0x18);
    }
    func_00304310(p_s1, 0x2);
    func_003094D0(buf0, 0x2);
}
