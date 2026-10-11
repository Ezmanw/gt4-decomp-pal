#include "types.h"
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s64 func_00440D50(s32);                             /* extern */

void func_00440D00(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg1 * 8) + arg0), s64 *, 0x470) = func_00440D50(arg2);
}
