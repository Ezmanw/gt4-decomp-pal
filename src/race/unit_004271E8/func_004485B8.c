#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00447F30(s32);                             /* extern */
s32 func_00448190();                                /* extern */
s32 func_004484E8(s32, s32);                    /* extern */

s32 func_004485B8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00448190();
    if (temp_v0 != 0) {
        func_004484E8(func_00447F30(temp_v0), arg1);
    }
}
