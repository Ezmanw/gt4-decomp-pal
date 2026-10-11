#include "gt4/mSound.h"
typedef int s32;

extern "C" void free(void *arg0);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);
extern "C" void func_0023F9E8(void *);
extern "C" void func_002C29D0(void *, s32);
extern "C" void hObject__structor_2(void *, s32);

extern void *mSound__vtable;

extern "C" void mSound__structor_1(void *arg0, s32 arg1) {
    ((struct mSound *)arg0)->unk4 = &mSound__vtable;
    func_0023F9E8(arg0);
    func_002C29D0((char *)arg0 + 0x14, 2);
    func_002C29D0((char *)arg0 + 0x10, 2);
    hObject__structor_2(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x18, 4, "RefCounter");
    }
}
