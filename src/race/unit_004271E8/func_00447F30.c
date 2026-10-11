#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00447F78();                                /* extern */
s32 func_00447FA0(s32);                             /* extern */

s32 func_00447F30(s32 arg0) {
    s32 var_v1;

    var_v1 = func_00447F78();
    if (var_v1 == -1) {
        var_v1 = func_00447FA0(arg0);
    }
    return var_v1;
}
