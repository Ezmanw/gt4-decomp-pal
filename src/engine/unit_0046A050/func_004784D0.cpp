typedef int s32;

struct Val { s32 type; s32 v; };
extern "C" void func_00476C98(Val *);
extern "C" Val *func_00476B40(Val *, const Val *);
extern "C" const char *strobe__Any__toString(Val *);
extern "C" s32 func_0057F238(const char *, const char *);

extern "C" s32 func_004784D0(const Val *a, const Val *b) {
    Val ta, tb;
    s32 r;
    func_00476B40(&ta, a);
    func_00476B40(&tb, b);
    r = func_0057F238(strobe__Any__toString(&ta), strobe__Any__toString(&tb)) > 0;
    func_00476C98(&tb);
    func_00476C98(&ta);
    return r;
}
