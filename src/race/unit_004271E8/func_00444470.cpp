typedef int s32;
struct Obj { s32 v; };
static inline void ctor(Obj *const self, s32 n) { self->v = n; }
extern char D_006235A8[];
extern "C" void func_00443680(void *);
extern "C" void func_004436F0(void *, s32) throw();

extern "C" void func_00444470(s32 init, s32 prio)
{
    if (prio == 0xFFFF && init == 1) func_00443680(D_006235A8);
    if (prio == 0xFFFF && init == 0) func_004436F0(D_006235A8, 0x2);
}
