#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00206928(s32);                             /* extern */
s32 func_00235DD8(s32, s32);                /* extern */
s32 func_0025C458(s32);                             /* extern */
s32 func_00266068(s32, s32);                /* extern */
s32 func_002661E0();                                /* extern */

void func_002DB500(s32 arg0, s32 arg1) {
    s32 var_s0;

    if (func_002661E0() != 0) {
        func_00235DD8(arg1, 0);
    }
    var_s0 = func_00206928(arg0);
    if (var_s0 != 0) {
        do {
            func_00266068(var_s0, 0);
            var_s0 = func_0025C458(var_s0);
        } while (var_s0 != 0);
    }
}
