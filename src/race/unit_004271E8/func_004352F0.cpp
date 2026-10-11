#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004351B0(s32, s32, s32, s32);          /* extern */
s32 func_00447F30(s32);                             /* extern */

void func_004352F0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_004351B0(arg0, func_00447F30(arg1), arg2, arg3);
}
