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
extern "C" void func_00209030(void *, void *);
extern "C" s32 func_00314A78(s32);
extern "C" void func_00209978(void *, s32, s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_0020A5A0(void *, s32);
extern "C" void func_00208FD8(void *, s32);
extern "C" void func_00312470(void *, s32);

extern "C" void MDomNode__global_0082AB18(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 *p_s3;
    s32 *p_s2;
    s32 v_s0;
    s32 newVal;
    s32 oldVal;
    func_003124C8(buf0, arg3);
    p_s3 = buf2;
    p_s2 = buf1;
    if (buf0[0] != 0) {
        func_00209030(p_s3, arg1);
        v_s0 = *p_s3;
        func_00209978(p_s2, v_s0, func_00314A78(buf0[0]));
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
        func_0020A5A0(p_s2, 0x2);
        func_00208FD8(p_s3, 0x2);
    }
    func_00312470(buf0, 0x2);
}
