/* compiler: ee-gcc2.96-no-strict-aliasing */
typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct Val;
extern "C" void func_00476C98(Val *);
extern "C" Val *func_00476B40(Val *, const Val *);

/* the script value: type 1 is nil; func_00476C98 releases the payload and sets nil */
struct Val {
    s32 type;
    s32 v;
    Val() : type(1) {}
    Val(const Val &o) { func_00476B40(this, &o); }
    ~Val() { func_00476C98(this); }
};
struct Stack { s32 f0; s32 f4; Val *top; };

extern "C" f32 func_00477838(const Val *);
extern "C" void func_00481378(Stack *, s32);
extern "C" void func_00476F08(Val *, s32);
extern "C" s32 func_0047D4C0(void *, s32);

extern "C" Val func_0047C968(void *self, s32 argc, Stack *st) {
    s32 n = 0;
    if (argc)
        n = (s32)func_00477838(st->top - 1);
    func_00481378(st, argc);
    Val t;
    func_00476F08(&t, self ? func_0047D4C0(self, n) : 0);
    return t;
}
