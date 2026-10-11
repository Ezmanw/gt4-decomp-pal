typedef int s32;
struct Obj { s32 v; };
static inline void ctor(Obj *const self, s32 n) { self->v = n; }
extern char D_00846640[];
extern char D_00846680[];
extern "C" void func_00485CB8(void *, void *, s32);
extern "C" void func_00485D10(void *, s32);

extern "C" void func_004606A0(s32 init, s32 prio)
{
    if (prio == 0xFFFF && init == 1) func_00485CB8(D_00846640, D_00846680, 0x20);
    if (prio == 0xFFFF && init == 0) func_00485D10(D_00846640, 0x2);
}
