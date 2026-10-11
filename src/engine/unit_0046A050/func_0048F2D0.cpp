typedef int s32;
struct Obj { s32 v; };
static inline void ctor(Obj *const self, s32 n) { self->v = n; }
extern char PDISTD__LOCALE[];
extern "C" void func_0048F220(void *);
extern "C" void func_0048F240(void *, s32) throw();

extern "C" void func_0048F2D0(s32 init, s32 prio)
{
    if (prio == 0xFFFF && init == 1) func_0048F220(PDISTD__LOCALE);
    if (prio == 0xFFFF && init == 0) func_0048F240(PDISTD__LOCALE, 0x2);
}
