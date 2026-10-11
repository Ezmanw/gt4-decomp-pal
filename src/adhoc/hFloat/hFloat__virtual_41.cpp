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

extern "C" void func_002F94B8(void *, f32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_002F7CC0(void *, s32);

extern "C" void hFloat__virtual_41(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 v_s0;
    func_002F94B8(buf0, *(f32 *)((char *)arg0 + 0x10));
    *(f32 *)((char *)arg0 + 0x10) = (*(f32 *)((char *)arg0 + 0x10) - 1.0f);
    if ((char *)arg1 != (char *)buf0) {
        v_s0 = buf0[0];
        if (v_s0 != 0) {
            func_00328700(v_s0);
        }
        if (*(s32 *)(char *)arg1 != 0) {
            func_00328750(*(s32 *)(char *)arg1);
        }
        *(s32 *)(char *)arg1 = v_s0;
    }
    func_002F7CC0(buf0, 0x2);
}
