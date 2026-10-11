#include "gt4/mProgressFace.h"
typedef int s32;

extern "C" void func_002285D8(void *arg0, s32 arg1);
extern "C" void mImageFace__structor_1(void *arg0, s32 arg1);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);

extern void *mProgressFace__vtable;

extern "C" void mProgressFace__structor_1(void *arg0, s32 arg1) {
    ((struct mProgressFace *)arg0)->unk4 = &mProgressFace__vtable;
    func_002285D8((char *)arg0 + 0xF0, 2);
    mImageFace__structor_1(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x100, 4, "RefCounter");
    }
}
