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

extern "C" void func_0013BDC8(void *);
extern "C" s32 func_00147D88(s32);
extern "C" s32 func_004415C0(s32);
extern "C" s32 func_00445838(s32);
extern "C" s32 func_00448EC0(s32, void *);
extern "C" void func_002FE3D0(void *, s32);
extern "C" void func_00328700(s32);
extern "C" void func_00328750(s32);
extern "C" void func_002FC9C8(void *, s32);
extern "C" void func_0013BD70(void *, s32);

extern "C" void MCarGarage__isTireSelectable(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 buf2[4];
    s32 buf3[4];
    s32 buf4[4];
    s32 buf5[4];
    s32 buf6[4];
    s32 *p_s3;
    s32 *p_s2;
    s32 newVal;
    s32 oldVal;
    p_s3 = buf5;
    func_0013BDC8(p_s3);
    if (func_00448EC0(func_00445838(func_004415C0(func_00147D88(*p_s3))), buf0) != 0) {
        p_s2 = buf6;
        func_002FE3D0(p_s2, *(u8 *)((char *)buf3 + 0x0) != 0);
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
        func_002FC9C8(p_s2, 0x2);
    } else {
        p_s2 = buf6;
        func_002FE3D0(p_s2, 0);
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
        func_002FC9C8(p_s2, 0x2);
    }
    func_0013BD70(p_s3, 0x2);
}
