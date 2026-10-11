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

extern "C" void func_003124C8(void *, void *);
extern "C" void func_002ED770(void *, void *);
extern "C" void func_001D6F18(void *, void *);
extern "C" s32 func_00314A78(s32);
extern "C" s32 func_001D9530(s32, s32, void *);
extern "C" void func_002FE3D0(void *, s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_002FC9C8(void *, s32);
extern "C" void func_001D6EC0(void *, s32);
extern "C" void func_002ED718(void *, s32);
extern "C" void func_00312470(void *, s32);

extern "C" void MHttp__POST(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 buf3[4];
    s32 *p_s4;
    s32 *p_s3;
    s32 v_s0;
    s32 *p_s1;
    s32 t1;
    s32 newVal;
    s32 oldVal;
    if (arg2 >= 0x2) {
        func_003124C8(buf0, arg3);
        p_s4 = buf1;
        func_002ED770(p_s4, (char *)arg3 + 0x4);
        p_s3 = buf3;
        func_001D6F18(p_s3, arg1);
        v_s0 = *p_s3;
        t1 = func_001D9530(v_s0, func_00314A78(buf0[0]), p_s4);
        p_s1 = buf2;
        func_002FE3D0(p_s1, t1 != 0);
        if (arg0 != p_s1) {
            newVal = *p_s1;
            if (newVal != 0) {
                func_00328700(newVal);
            }
            oldVal = *arg0;
            if (oldVal != 0) {
                func_00328750(oldVal);
            }
            *arg0 = newVal;
        }
        func_002FC9C8(p_s1, 0x2);
        func_001D6EC0(p_s3, 0x2);
        func_002ED718(p_s4, 0x2);
        func_00312470(buf0, 0x2);
    }
}
