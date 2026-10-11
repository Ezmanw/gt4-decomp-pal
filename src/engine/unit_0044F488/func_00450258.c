#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_00450020(s32);                             /* extern */
f32 func_004501E8();                                /* extern */

f32 func_00450258(s32 arg0) {
    f32 temp_f20;

    temp_f20 = func_004501E8();
    return func_00450020(arg0) * temp_f20 * temp_f20;
}
