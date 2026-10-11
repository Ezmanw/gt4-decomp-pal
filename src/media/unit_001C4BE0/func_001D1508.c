#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_001D15C0(void *, s32, s32);            /* extern */
s32 func_001D1708(void *, s32);                 /* extern */

void func_001D1508(s32 arg0, s32 arg1, s32 arg2) {
    s8 sp[0x10];
    func_001D1708(sp, arg2);
    func_001D15C0(sp, arg0, arg1);
}
