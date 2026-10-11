#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00265EF0(s32);                             /* extern */
s32 func_00265F98(s32);                             /* extern */
s32 func_002663F8(s32);                             /* extern */

s32 func_00207498(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((func_00265EF0(arg1) == 0) && (func_00265F98(arg1) != 0)) {
        if ((func_002663F8(arg0) == 0) || (var_v0 = 1, (func_002663F8(arg1) == 0))) {
            if ((func_002663F8(arg0) == 0) && (func_002663F8(arg1) == 0)) {
                return 1;
            }
            goto block_7;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return var_v0;
    }
block_7:
    var_v0 = 0;
    return var_v0;
}
