#define GT4_DECLS
#include "gt4/mWidget.h"
#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00206928(s32);                             /* extern */
s32 func_0025C458(s32);                             /* extern */
s32 func_002661E0();                                /* extern */

void func_002D7520(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    s32 var_s1;

    if (func_002661E0() != 0) {
        var_s1 = 0;
        var_s0 = func_00206928(arg0);
        if (var_s0 != 0) {
            do {
                if (var_s1 == arg1) {
                    mWidget__setActive(var_s0, 0);
                }
                if (var_s1 == arg2) {
                    mWidget__setActive(var_s0, 1);
                }
                var_s1 += 1;
                var_s0 = func_0025C458(var_s0);
            } while (var_s0 != 0);
        }
    }
}
