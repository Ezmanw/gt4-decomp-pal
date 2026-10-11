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

extern "C" void * mStorageHD__structor_0(void *);
extern "C" void func_00240508(void *, void *);
extern "C" void func_002425F0(void *, s32);
extern "C" void * mStorageMC__structor_0(void *);
extern "C" void func_00276688(void *, s32);

extern "C" void * func_00240700(s32 *arg0, void *arg1) {
    s32 buf0[4];
    if (arg1 == 0) {
        mStorageHD__structor_0(buf0);
        *(s32 *)((char *)buf0[0] + 0x10) = 0;
        func_00240508(arg0, buf0);
        func_002425F0(buf0, 0x2);
    } else {
        mStorageMC__structor_0(buf0);
        *(s32 *)((char *)buf0[0] + 0x10) = (s32)arg1;
        func_00240508(arg0, buf0);
        func_00276688(buf0, 0x2);
    }
    return arg0;
}
