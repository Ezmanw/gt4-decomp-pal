typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct Val {
    s32 type;
    s32 v;
    bool isString() const { return (u32)(type - 3) < 2; }
};
extern "C" void func_00476C98(Val *);
extern "C" Val *func_00476B40(Val *, const Val *);
extern "C" const char *strobe__Any__toString(Val *);
extern "C" s32 func_0057F238(const char *, const char *);
extern "C" f32 func_00477838(const Val *);
extern "C" void func_00478B90(Val *, s32 type);

extern "C" s32 func_004783D8(const Val *a, const Val *b) {
    if (a->isString() || b->isString()) {
        Val ta, tb;
        s32 r;
        func_00476B40(&ta, a);
        func_00476B40(&tb, b);
        func_00478B90(&ta, 10);
        func_00478B90(&tb, 10);
        r = func_00477838(&ta) > func_00477838(&tb);
        func_00476C98(&tb);
        func_00476C98(&ta);
        return r;
    }
    return func_00477838(a) > func_00477838(b);
}
