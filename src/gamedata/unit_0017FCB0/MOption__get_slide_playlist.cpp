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

extern "C" void * func_0017FB50(void *);
extern "C" void * func_0019E6C0(void *, s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_0019E4D8(void *, s32);
extern "C" void func_0017FAF8(void *, s32);

extern "C" void MOption__get_slide_playlist(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s2;
    s32 newVal;
    s32 oldVal;
    p_s2 = buf1;
    func_0017FB50(p_s2);
    func_0019E6C0(buf0, *(s32 *)((char *)*p_s2 + 0x10) + 0x8a0);
    if (arg0 != buf0) {
        newVal = buf0[0];
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_0019E4D8(buf0, 0x2);
    func_0017FAF8(p_s2, 0x2);
}
