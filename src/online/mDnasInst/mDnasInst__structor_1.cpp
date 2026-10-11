#include "gt4/mDnasInst.h"
typedef int s32;

extern "C" void hObject__structor_2(void *arg0, s32 arg1);
extern "C" void func_0032F018(void *arg0);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);

extern void *mDnasInst__vtable;

extern "C" void mDnasInst__structor_1(void *arg0, s32 arg1) {
    ((struct mDnasInst *)arg0)->unk4 = &mDnasInst__vtable;
    func_0032F018((char *)arg0 + 0x10);
    hObject__structor_2(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x1C, 4, "RefCounter");
    }
}
