#include "gt4/mRenderContextPS2.h"
typedef int s32;

extern "C" void func_001052A0(void *arg0, s32 arg1);
extern "C" void mRenderContext__structor_1(void *arg0, s32 arg1);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);

extern void *mRenderContextPS2__vtable;

extern "C" void mRenderContextPS2__structor_1(void *arg0, s32 arg1) {
    ((struct mRenderContextPS2 *)arg0)->unk4 = &mRenderContextPS2__vtable;
    func_001052A0((char *)arg0 + 0x1D5C, 2);
    mRenderContext__structor_1(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x1DAC, 4, "RefCounter");
    }
}
