#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003DA368(s32);                         /* extern */
s32 func_003DA390(s32);                         /* extern */
s32 func_003DA3C0(s32);                         /* extern */
s32 func_00426E70(s32);                             /* extern */
s32 func_00426E78(s32);                             /* extern */

s32 func_003D9C28(s32 arg0, s32 arg1) {
    if (func_00426E78(arg1) & 0x1000) {
        func_003DA368(arg0);
    }
    if (func_00426E78(arg1) & 0x2000) {
        func_003DA390(arg0);
    }
    if (func_00426E70(arg1) & 0x4000) {
        func_003DA3C0(arg0);
    }
}
