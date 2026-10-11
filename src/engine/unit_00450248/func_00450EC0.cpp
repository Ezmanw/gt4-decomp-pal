#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004587A8(s32);                         /* extern */
s32 func_00458A60(s32, s32);                        /* extern */

void func_00450EC0(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_v0;

    temp_v0 = func_00458A60(*arg1, arg2);
    *arg0 = temp_v0;
    func_004587A8(temp_v0);
}
