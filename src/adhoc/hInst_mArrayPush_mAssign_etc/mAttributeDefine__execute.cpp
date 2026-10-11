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

extern "C" s32 HValue__isValid(void *);
extern "C" s32 func_003221B8(void *);
extern "C" void func_0032BE90(void *, void *);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_0032BB58(void *, s32);
extern "C" void func_00306748(s32, void *);

extern "C" void mAttributeDefine__execute(s32 *arg0, void *arg1) {
    s32 buf0[4];
    char *v_s1;
    s32 v_s3;
    s32 v_s0;
    v_s1 = (char *)arg0 + 0xc;
    if (HValue__isValid(v_s1) == 0) {
        v_s3 = func_003221B8(arg1);
        func_0032BE90(buf0, (char *)arg0 + 0x8);
        v_s0 = buf0[0];
        if ((char *)v_s1 != (char *)buf0) {
            if (v_s0 != 0) {
                func_00328700(v_s0);
            }
            if (*(s32 *)(char *)v_s1 != 0) {
                func_00328750(*(s32 *)(char *)v_s1);
            }
            *(s32 *)(char *)v_s1 = v_s0;
        }
        func_0032BB58(buf0, 0x2);
        func_00306748(v_s3, v_s1);
    }
}
