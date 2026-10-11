#include "gt4/mVirtualFace.h"
typedef int s32;

extern "C" void free(void *arg0);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);
extern "C" void func_003094D0(void *, s32);
extern "C" void func_002F9C90(void *, s32);
extern "C" void mWidget__structor_1(void *, s32);

extern void *mVirtualFace__vtable;

extern "C" void mVirtualFace__structor_1(void *arg0, s32 arg1) {
    ((struct mVirtualFace *)arg0)->unk4_pvoid = &mVirtualFace__vtable;
    func_003094D0((char *)arg0 + 0xA4, 2);
    func_002F9C90((char *)arg0 + 0xA0, 2);
    mWidget__structor_1(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0xA8, 4, "RefCounter");
    }
}
