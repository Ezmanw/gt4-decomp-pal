#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004761D0(s32 *, s32, s32);             /* extern */
s32 func_004809F8(s32);                             /* extern */

s32 func_00476238(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = *arg0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_004809F8(temp_v0);
        if (temp_v0_2 >= 0) {
            func_004761D0(arg0, temp_v0_2, arg2);
        }
    }
}
