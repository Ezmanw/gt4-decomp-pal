#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_00450008(s32);                             /* extern */
f32 func_004501B8();                                /* extern */

f32 func_00450218(s32 arg0) {
    f32 temp_f20;

    temp_f20 = func_004501B8();
    return func_00450008(arg0) * temp_f20 * temp_f20;
}
