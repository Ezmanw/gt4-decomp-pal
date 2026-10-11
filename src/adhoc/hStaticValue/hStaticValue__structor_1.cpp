#include "gt4/hStaticValue.h"
typedef int s32;

extern "C" void func_003094D0(void *arg0, s32 arg1);
extern "C" void hValue__structor_1(void *arg0, s32 arg1);
extern "C" void func_003268F0(void *arg0, s32 arg1, s32 arg2, const char *arg3);

extern void *hStaticValue__vtable;

extern "C" void hStaticValue__structor_1(void *arg0, s32 arg1) {
    ((struct hStaticValue *)arg0)->unk4 = &hStaticValue__vtable;
    func_003094D0((char *)arg0 + 0xC, 2);
    hValue__structor_1(arg0, 0);
    if (arg1 & 1) {
        return func_003268F0(arg0, 0x10, 4, "RefCounter");
    }
}
