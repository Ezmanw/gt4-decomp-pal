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

extern "C" void * func_0015F3E8(void *);
extern "C" void * func_0018FC90(void *, s32);
extern "C" void func_0018FF10(s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_0017FAF8(void *, s32);
extern "C" void func_0015F390(void *, s32);

extern "C" void MGame__getOption(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s2;
    s32 newVal;
    s32 oldVal;
    func_0015F3E8(buf0);
    p_s2 = buf1;
    func_0018FC90(p_s2, (0x38cb0 + *(s32 *)((char *)buf0[0] + 0x10)));
    func_0018FF10(*p_s2);
    if (arg0 != p_s2) {
        newVal = *p_s2;
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_0017FAF8(p_s2, 0x2);
    func_0015F390(buf0, 0x2);
}
