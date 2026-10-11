#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0035C018(s32);                             /* extern */
s32 Pitmen__is_tireman(s32);                             /* extern */
s32 func_003CCC70(s32);                             /* extern */
s32 func_003CCC80(s32);                             /* extern */
s32 func_003CFA00(s32);                             /* extern */
s32 func_003CFA40(s32, s32, s32);                   /* extern */
s32 func_003CFA90(s32, s32);                        /* extern */
s32 func_003D2CC0(s32, s32, s32);               /* extern */
s32 func_003D2D60(s32, s32);                        /* extern */

s32 func_003CF8D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    if (Pitmen__is_tireman(arg1) != 0) {
        return func_003CFA00(arg3);
    }
    if (func_003CCC70(arg1) != 0) {
        temp_s0 = func_0035C018(arg2);
        return func_003CFA40(arg3, temp_s0, func_003D2D60(arg0, arg4));
    }
    if (func_003CCC80(arg1) != 0) {
        return func_003CFA90(arg3, func_003D2CC0(arg0, arg4, -1));
    }
    return 0x8FFFFFFF;
}
