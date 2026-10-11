#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00451020(s32);                         /* extern */
s32 func_004547E8(s32);                         /* extern */

void func_003905F0(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_004547E8(arg1);
        func_00451020(arg0 + 0x18);
    }
}
