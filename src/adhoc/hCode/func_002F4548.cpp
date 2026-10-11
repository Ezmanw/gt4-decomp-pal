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

extern "C" void func_003193C0(void *);
extern "C" void func_002F43C0(void *, void *);
extern "C" void func_0030BC70(void *);
extern "C" void hThread__execCode(void *, s32, void *, void *, s32, void *);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_003094D0(void *, s32);
extern "C" void func_002F4368(void *, s32);
extern "C" void func_00318690(void *, s32);

extern "C" void func_002F4548(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 buf3[4];
    s32 *p_s6;
    s32 *p_s5;
    s32 v_s0;
    s32 *p_s4;
    s32 newVal;
    s32 oldVal;
    func_003193C0(buf0);
    p_s6 = buf1;
    func_002F43C0(p_s6, arg1);
    p_s5 = buf3;
    v_s0 = buf0[0];
    p_s4 = buf2;
    func_0030BC70(p_s5);
    hThread__execCode(p_s4, v_s0, p_s6, p_s5, arg2, arg3);
    if (arg0 != p_s4) {
        newVal = *p_s4;
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_003094D0(p_s4, 0x2);
    func_003094D0(p_s5, 0x2);
    func_002F4368(p_s6, 0x2);
    func_00318690(buf0, 0x2);
}
