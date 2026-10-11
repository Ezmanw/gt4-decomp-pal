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

extern char PDISTD__UNIT_MANAGER[];
extern Rep D_00659FA8;
extern s32 D_00659FB4;
extern "C" s32 func_00472C70(void *);
extern "C" void * func_0015F3E8(void *, void *);
extern "C" void func_0015F390(void *, s32);
extern "C" f32 func_0057F480(s64);
extern "C" f32 func_00473000(void *, f32);
extern "C" s32 func_0057F360(f32);
extern "C" void func_0042EB60(s32, void *, s32);
extern "C" void * func_005A5DC8(void *, s32);
extern "C" char * func_005C2560(Rep *);
extern "C" s32 func_0057F260(void *);
extern "C" void * func_005C2630(void *, s32, s32, void *, s32);
extern "C" void * func_00314C78(void *, void *);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_00312470(void *, s32);
extern "C" struct S00659988 * func_005C11A8(void);
extern "C" void func_003268F0(void *, s32, s32, const char *);

static inline void str_release(Str *s) {
    Rep *q = (Rep *)(s->p - 0x10);
    if (--q->ref == 0) {
        s32 size = q->cap + 0x10;
        func_003268F0(q, size, 4, func_005C11A8()->name);
    }
}

extern "C" void MGame__getBspecDistance(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 buf3[4];
    s32 buf4[4];
    s32 buf5[4];
    s32 buf6[4];
    s32 buf7[4];
    s32 buf8[4];
    s32 buf9[4];
    Str s10;
    char *v_s1;
    s32 *p_s3;
    s32 t1;
    s32 v_s2;
    s64 v_s0;
    Str *p_s1;
    s32 *p_s0;
    s32 newVal;
    s32 oldVal;
    v_s1 = (char *)&PDISTD__UNIT_MANAGER;
    t1 = func_00472C70(v_s1);
    p_s3 = buf8;
    v_s2 = t1;
    func_0015F3E8(p_s3, arg1);
    v_s0 = *(s64 *)((char *)(*(s32 *)((char *)(*p_s3) + 0x10)) + 0x3c0);
    func_0015F390(p_s3, 0x2);
    func_0042EB60(func_0057F360(func_00473000(v_s1, func_0057F480(v_s0))), buf0, 0x80);
    func_005A5DC8(buf0, v_s2);
    p_s1 = &s10;
    p_s0 = buf0;
    {
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        p_s1->p = d;
    }
    func_005C2630(p_s1, 0, -0x1, p_s0, func_0057F260(p_s0));
    func_00314C78(p_s3, p_s1);
    if (arg0 != p_s3) {
        newVal = *p_s3;
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_00312470(p_s3, 0x2);
    str_release(p_s1);
}
