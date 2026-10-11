#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00481378(s32, s32);                    /* extern */
s32 func_005A5600();                                /* extern */

f32 func_0047C528(s32 arg0, s32 arg1) {
    func_00481378(arg1, arg0);
    return (f32) func_005A5600() / 0x1.fffffe0000000p+30f;
}
