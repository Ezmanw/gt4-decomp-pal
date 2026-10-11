#include "gt4/mColorObject.h"
typedef int s32;

extern "C" void func_002031D8(void *arg0, s32 arg1);
extern "C" void hObject__structor_2(void *arg0, s32 arg1);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);

extern void *mColorObject__vtable;

extern "C" void mColorObject__structor_2(void *arg0, s32 arg1) {
    ((struct mColorObject *)arg0)->unk4 = &mColorObject__vtable;
    func_002031D8((char *)arg0 + 0x10, 2);
    hObject__structor_2(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x20, 4, "RefCounter");
    }
}
