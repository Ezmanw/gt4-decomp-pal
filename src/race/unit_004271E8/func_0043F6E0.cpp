#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0043F5E8();                                /* extern */
s32 func_0043F7E8(s32, s32);                    /* extern */

void func_0043F6E0(s32 arg0, s32 arg1, s32 arg2) {
    func_0043F7E8(arg0, func_0043F5E8() + arg2);
}
