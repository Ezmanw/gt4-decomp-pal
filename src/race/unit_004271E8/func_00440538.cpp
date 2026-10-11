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

extern "C" void func_004401D0(void);
extern "C" void func_00440218(void *, void *);
extern "C" void func_00440268(void *, void *);
extern "C" void func_004402B8(void *, void *);
extern "C" void func_00440308(void *, void *);
extern "C" void func_00440358(void *, void *);
extern "C" void func_004403A8(void *, void *);
extern "C" void func_004403F8(void *, void *);
extern "C" void func_00440448(void *, void *);
extern "C" void func_00440498(void *, void *);
extern "C" void func_004404E8(void *, void *);

extern "C" void func_00440538(s32 *arg0, void *arg1) {
    func_004401D0();
    func_00440218(arg0, arg1);
    func_00440268(arg0, arg1);
    func_004402B8(arg0, arg1);
    func_00440308(arg0, arg1);
    func_00440358(arg0, arg1);
    func_004403A8(arg0, arg1);
    func_004403F8(arg0, arg1);
    func_00440448(arg0, arg1);
    func_00440498(arg0, arg1);
    func_004404E8(arg0, arg1);
}
