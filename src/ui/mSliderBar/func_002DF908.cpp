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

extern char D_0069CF88[];
extern "C" void func_0023FCD8(void *);
extern "C" void func_0023FA20(s32, void *);
extern "C" void func_0023DF48(void *, s32);
extern "C" void func_0057CE40(void *, s32);
extern "C" void func_002DF4F8(void *, void *, s32);
extern "C" void func_00230828(void *, s32);
extern "C" void func_002320B8(void *, s32);

struct func_002DF908_arg0 {
    char pad0[0xF8];
    s32 unkF8;
    char padFC[0x10];
    s32 unk10C;
};

extern "C" void func_002DF908(s32 *arg0, void *arg1, s32 arg2) {
    s32 buf0[4];
    func_0023FCD8(buf0);
    func_0023FA20(buf0[0], &D_0069CF88);
    func_0023DF48(buf0, 0x2);
    if (arg2 != 0) {
        func_0057CE40((char *)arg0 + 0xcc, ((struct func_002DF908_arg0 *)arg0)->unkF8);
        func_002DF4F8(arg0, arg1, 0);
    }
    ((struct func_002DF908_arg0 *)arg0)->unk10C = 0;
    func_00230828(arg1, 0x1);
    func_002320B8(arg1, 0);
}
