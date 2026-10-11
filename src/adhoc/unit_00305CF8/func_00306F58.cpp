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

extern char D_0069DC80[];
extern "C" s32 func_003268A8(s32, s32, void *);
extern "C" s32 HSymID__GetID(void *);
extern "C" void hModule__structor_0(s32, void *);
extern "C" void func_003094A0(void *, void *);

extern "C" void func_00306F58(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s2;
    s32 v_s1;
    s32 t1;
    p_s2 = buf1;
    v_s1 = func_003268A8(0x2c, 0x4, &D_0069DC80);
    t1 = HSymID__GetID(arg1);
    buf0[0] = t1;
    hModule__structor_0(v_s1, buf0);
    buf1[0] = v_s1;
    func_003094A0(arg0, p_s2);
}
