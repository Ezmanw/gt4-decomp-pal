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

extern "C" void func_00179300(void *);
extern "C" void func_0017D2E8(void *, void *);
extern "C" void func_0017D290(void *, s32);
extern "C" void func_001D2A48(s32);
extern "C" void func_001792A8(void *, s32);

struct MMemoryCardManager__set_list_v_s1 {
    char pad0[0x678];
    s32 unk678;
};

extern "C" void MMemoryCardManager__set_list(s32 *arg0, void *arg1, s32 arg2, char **arg3) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p_s0;
    s32 v_s1;
    if (arg2 > 0) {
        func_00179300(buf0);
        p_s0 = buf1;
        v_s1 = *(s32 *)((char *)buf0[0] + 0x20);
        func_0017D2E8(p_s0, arg3);
        ((struct MMemoryCardManager__set_list_v_s1 *)v_s1)->unk678 = *(s32 *)((char *)(*p_s0) + 0x10);
        func_0017D290(p_s0, 0x2);
        func_001D2A48(*(s32 *)((char *)buf0[0] + 0x20));
        func_001792A8(buf0, 0x2);
    }
}
