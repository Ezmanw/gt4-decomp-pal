#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004920D8();                                /* extern */
s32 func_00492278(s32, s32, s32, s32);          /* extern */

void func_00492120(s32 arg0, s32 arg1) {
    func_00492278(arg0 + 4, arg0 + 8, func_004920D8(), arg1);
}
