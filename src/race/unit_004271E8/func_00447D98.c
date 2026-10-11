#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00447DF0(s32);                         /* extern */

s32 func_00447D98(void) {
    s32 var_v0;

    var_v0 = func_00447DF0(0);
    if (var_v0 != 0) {
        var_v0 = func_00447DF0(1) != 0;
    }
    return var_v0;
}
