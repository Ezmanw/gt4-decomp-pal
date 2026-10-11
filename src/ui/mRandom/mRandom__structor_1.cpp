#include "gt4/mRandom.h"
typedef int s32;

extern "C" void free(void *arg0);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);
extern "C" void func_002CBF28(s32);
extern "C" void hObject__structor_2(void *, s32);

extern void *mRandom__vtable;

extern "C" void mRandom__structor_1(struct mRandom *arg0, s32 arg1) {
    arg0->unk4 = &mRandom__vtable;
    func_002CBF28(1);
    hObject__structor_2(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x10, 4, "RefCounter");
    }
}
