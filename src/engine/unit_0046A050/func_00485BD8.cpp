typedef int s32;
struct Obj { s32 v; };
static inline void ctor(Obj *const self, s32 n) { self->v = n; }
extern char D_00624898[];
extern char D_00848678[];
extern "C" void func_00485CB8(void *, void *, s32);
extern "C" void func_00485D10(void *, s32);

extern "C" void func_00485BD8(s32 init, s32 prio)
{
    if (prio == 0xFFFF && init == 1) func_00485CB8(D_00624898, D_00848678, 0x100);
    if (prio == 0xFFFF && init == 0) func_00485D10(D_00624898, 0x2);
}
