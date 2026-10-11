#include "gt4/mMovieFace.h"
typedef int s32;

extern "C" void free(void *arg0);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);
extern "C" void func_0021D980(void *, s32);
extern "C" void func_00220908(void *, s32);
extern "C" void mImageFace__structor_1(void *, s32);

extern void *mMovieFace__vtable;

extern "C" void mMovieFace__structor_1(void *arg0, s32 arg1) {
    ((struct mMovieFace *)arg0)->unk4 = &mMovieFace__vtable;
    func_0021D980((char *)arg0 + 0x114, 2);
    func_00220908((char *)arg0 + 0xF0, 2);
    mImageFace__structor_1(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x160, 4, "RefCounter");
    }
}
