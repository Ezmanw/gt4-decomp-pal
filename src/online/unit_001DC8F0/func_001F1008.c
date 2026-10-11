#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_001F1208();                                /* extern */
s32 func_004EF0F8(s32, s32);                    /* extern */

extern char D_00645440[];
s32 func_001F1008(s32 arg0, s32 arg1) {
    if (func_001F1208() != 0) {
        return 1;
    }
    return func_004EF0F8((s32)D_00645440, arg1);
}
