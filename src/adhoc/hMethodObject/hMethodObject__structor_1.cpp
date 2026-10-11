#include "gt4/hMethodObject.h"
typedef int s32;

extern "C" void func_00303A38(void *arg0, s32 arg1);
extern "C" void func_003094D0(void *arg0, s32 arg1);
extern "C" void hObject__structor_2(void *arg0, s32 arg1);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);

extern void *hMethodObject__vtable;

extern "C" void hMethodObject__structor_1(void *arg0, s32 arg1) {
    ((struct hMethodObject *)arg0)->unk4_pvoid = &hMethodObject__vtable;
    func_00303A38((char *)arg0 + 0x14, 2);
    func_003094D0((char *)arg0 + 0x10, 2);
    hObject__structor_2(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x18, 4, "RefCounter");
    }
}
