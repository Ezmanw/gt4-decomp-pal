#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00206928();                                /* extern */
s32 func_0025C458(s32);                             /* extern */
s32 func_002660D8(s32, s32);                    /* extern */

void func_00229D50(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = func_00206928();
    if (var_s0 != 0) {
        do {
            func_002660D8(var_s0, arg1);
            var_s0 = func_0025C458(var_s0);
        } while (var_s0 != 0);
    }
}
