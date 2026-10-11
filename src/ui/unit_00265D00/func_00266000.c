#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00265F20();                                /* extern */
s32 func_00266058(s32);                             /* extern */
s32 func_00266320(s32);                             /* extern */

s32 func_00266000(s32 arg0) {
    s32 var_s1;

    var_s1 = 0;
    if ((func_00265F20() != 0) && (func_00266058(arg0) != 0)) {
        var_s1 = func_00266320(arg0) == 0;
    }
    return var_s1;
}
