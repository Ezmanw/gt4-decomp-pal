#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

f32 func_003448F0(s32);                             /* extern */
f32 func_00344950(s32, f32);                        /* extern */
f32 func_00344980(s32, f32);                        /* extern */
s32 func_0044F2F0(s32, f32, f32, f32);          /* extern */

void func_0044F3A8(s32 arg0, s32 arg1, f32 fparg0) {
    f32 temp_f21;
    f32 temp_f22;

    temp_f22 = func_003448F0(arg1);
    temp_f21 = func_00344950(arg1, fparg0);
    func_0044F2F0(arg0, temp_f22, temp_f21, func_00344980(arg1, fparg0));
}
