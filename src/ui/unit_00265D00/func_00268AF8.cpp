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

extern "C" void func_002689E0(void *);
extern "C" void func_0030D760(void *, void *);
extern "C" struct S00659988 * func_005C11A8(void);
extern "C" void func_003268F0(void *, s32, s32, const char *);

static inline void str_release(Str *s) {
    Rep *q = (Rep *)(s->p - 0x10);
    if (--q->ref == 0) {
        s32 size = q->cap + 0x10;
        func_003268F0(q, size, 4, func_005C11A8()->name);
    }
}

extern "C" void * func_00268AF8(s32 *arg0) {
    Str s0;
    func_002689E0(&s0);
    func_0030D760(arg0, &s0);
    str_release(&s0);
    return arg0;
}
