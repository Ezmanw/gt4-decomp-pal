#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_004352F0(s32, s32, s32, s32);          /* extern */
s32 func_004356C0();                                /* extern */

s32 func_00435AF8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    temp_v0 = func_004356C0();
    if (temp_v0 >= 0) {
        func_004352F0(arg0 + (temp_v0 << 5) + 8, arg1, arg2, arg3);
    }
    return temp_v0;
}
