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

extern "C" void * func_002FE3D0(void *, s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_002FC9C8(void *, s32);

struct hInt__virtual_40_arg0 {
    u8 pad0[0x10];
    s32 unk10;
};

extern "C" void hInt__virtual_40(s32 *arg0, void *arg1) {
    s32 buf0[4];
    s32 v_s0;
    func_002FE3D0(buf0, ((struct hInt__virtual_40_arg0 *)arg0)->unk10);
    ((struct hInt__virtual_40_arg0 *)arg0)->unk10 = ((struct hInt__virtual_40_arg0 *)arg0)->unk10 + 0x1;
    if ((char *)arg1 != (char *)buf0) {
        v_s0 = buf0[0];
        if (v_s0 != 0) {
            func_00328700(v_s0);
        }
        if (*(s32 *)(char *)arg1 != 0) {
            func_00328750(*(s32 *)(char *)arg1);
        }
        *(s32 *)(char *)arg1 = v_s0;
    }
    func_002FC9C8(buf0, 0x2);
}
