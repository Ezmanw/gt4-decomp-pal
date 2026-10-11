#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003CA2A0(s32);                             /* extern */
s32 func_0040C588(s32, s32);                    /* extern */

void func_003D29D0(s32 arg0, s32 arg1) {
    func_0040C588(arg0 + (func_003CA2A0(arg1) * 0x30) + 0x2C4, arg1);
}
