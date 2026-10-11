#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00206928(s32);                             /* extern */
s32 func_0025C458(s32);                             /* extern */
s32 func_00265EF0(s32);                             /* extern */
s32 func_00266068(s32, s32);                /* extern */
s32 mWidget__setActive(s32, s32);                /* extern */

struct func_002C8568_arg0 {
    char pad0[0xC4];
    s32 unkC4;
};

void func_002C8568(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s0;

    temp_a0 = ((struct func_002C8568_arg0 *)arg0)->unkC4;
    if (temp_a0 != 0) {
        var_s0 = func_00206928(temp_a0);
        if (var_s0 != 0) {
            do {
                if (func_00265EF0(var_s0) == 0) {
                    mWidget__setActive(var_s0, 0);
                    func_00266068(var_s0, 1);
                }
                var_s0 = func_0025C458(var_s0);
            } while (var_s0 != 0);
        }
    }
    if (arg1 != 0) {
        mWidget__setActive(arg1, 1);
    }
}
