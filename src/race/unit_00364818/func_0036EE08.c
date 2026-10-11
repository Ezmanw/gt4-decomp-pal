#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_0036ED88();                                /* extern */

f32 func_0036EE08(void) {
    f32 var_f1;

    var_f1 = func_0036ED88();
    if (var_f1 > 180.0f) {
        var_f1 -= 360.0f;
    }
    return var_f1;
}
