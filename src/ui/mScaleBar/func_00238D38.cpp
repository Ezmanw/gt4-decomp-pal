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

extern char D_00698BB8[];
extern "C" void func_0023FCD8(void *);
extern "C" void func_0023FA20(s32, void *);
extern "C" void func_0023DF48(void *, s32);
extern "C" void func_00230828(void *, s32);
extern "C" void func_002320B8(void *, s32);

struct func_00238D38_arg0 {
    char pad0[0xC4];
    f32 unkC4;
    char padC8[0x24];
    f32 unkEC;
    s32 unkF0;
    char padF4[0xC];
    s32 unk100;
    s32 unk104;
};

extern "C" void func_00238D38(s32 *arg0, void *arg1) {
    s32 buf0[4];
    func_0023FCD8(buf0);
    func_0023FA20(buf0[0], &D_00698BB8);
    func_0023DF48(buf0, 0x2);
    ((struct func_00238D38_arg0 *)arg0)->unk100 = 0x1;
    ((struct func_00238D38_arg0 *)arg0)->unk104 = 0;
    func_00230828(arg1, 0);
    func_002320B8(arg1, ((struct func_00238D38_arg0 *)arg0)->unkF0);
    ((struct func_00238D38_arg0 *)arg0)->unkEC = ((struct func_00238D38_arg0 *)arg0)->unkC4;
}
