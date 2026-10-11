#include "gt4/mEvent.h"
typedef int s32;

extern "C" void free(void *arg0);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);
extern "C" void func_00328810(void *);
extern "C" void hObject__structor_2(void *, s32);

extern void *mEvent__vtable;

extern "C" void mEvent__structor_1(struct mEvent *arg0, s32 arg1) {
    arg0->unk4 = &mEvent__vtable;
    void *p = arg0->unk1C;
    if (p != 0) {
        func_00328810(p);
    }
    hObject__structor_2(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x20, 4, "RefCounter");
    }
}
