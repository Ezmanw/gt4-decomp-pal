#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0046ECF8(s32, s32);                    /* extern */
s32 func_0046EDE0(s32);                             /* extern */

s32 func_0046E0D8(s32 arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = arg0 + 0xA88;
    temp_a1 = func_0046EDE0(temp_s0) - 2;
    var_v0 = 1;
    if (temp_a1 >= 0) {
        func_0046ECF8(temp_s0, temp_a1);
        var_v0 = -1;
    }
    return var_v0;
}
