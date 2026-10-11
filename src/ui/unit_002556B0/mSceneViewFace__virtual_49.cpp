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

extern "C" s32 func_003056A0(void);
extern "C" void func_0025AF50(void *, void *, void *);
extern "C" void func_003056A8(void *, void *);
extern "C" s32 func_0025C3F8(void *);
extern "C" void func_00328700(void *);
extern "C" void func_00306288(s32, void *);
extern "C" void func_003042E0(void *, void *);
extern "C" void func_00306790(void *, s32, void *);
extern "C" void func_00323CB8(void *, s32);
extern "C" void func_00304310(void *, s32);
extern "C" void func_00328750(void *);

extern "C" void mSceneViewFace__virtual_49(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 buf3[4];
    s32 *p_s3;
    s32 t1;
    s32 v_s1;
    s32 *p_s0;
    t1 = func_003056A0();
    p_s3 = buf1;
    buf0[0] = *(s32 *)(char *)t1;
    func_0025AF50(p_s3, arg0, arg1);
    func_003056A8(arg0, p_s3);
    v_s1 = func_0025C3F8(arg0);
    if (v_s1 != 0) {
        func_00328700(arg0);
        func_00306288(v_s1, buf0);
        p_s0 = buf2;
        buf3[0] = (s32)arg0;
        func_003042E0(p_s0, buf3);
        func_00306790(p_s3, v_s1, p_s0);
        func_00323CB8(p_s3, 0x2);
        func_00304310(p_s0, 0x2);
        func_00328750(arg0);
    }
}
