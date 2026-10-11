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

extern "C" s32 func_00579358(void);
extern "C" void malloc(s32);
extern "C" s32 func_0043A808(void);
extern "C" void func_001092D8(void);
extern "C" void func_00103BA0(void);
extern "C" void func_00102758(void);
extern "C" void func_00108CC0(void);
extern "C" void func_0010AFD0(void);
extern "C" void func_00101D60(void);
extern "C" void func_0044A928(void);
extern "C" void func_0044B718(void);
extern "C" void func_00103D40(void);
extern "C" void func_0043A878(s32);
extern "C" void func_0010B270(void);

extern "C" void func_00108C00(s32 *arg0) {
    s32 v_s0;
    malloc(((func_00579358() & 0x3f) + 0x1 << 4));
    v_s0 = func_0043A808();
    func_001092D8();
    func_00103BA0();
    func_00102758();
    func_00108CC0();
    func_0010AFD0();
    func_00101D60();
    func_0044A928();
    func_0044B718();
    func_00103D40();
    func_0043A878(v_s0);
    func_0010B270();
}
