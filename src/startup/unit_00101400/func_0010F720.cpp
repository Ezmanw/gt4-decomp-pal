#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0044AF98();                                /* extern */
s32 func_0044B5D0(s32 *, s32, s32);         /* extern */
s32 func_005A48D8(s32, s32, s32);       /* extern */

void func_0010F720(s32 *arg0, s32 arg1) {
    *arg0 = func_0044AF98();
    func_005A48D8(arg1, 0, 0x20);
    func_0044B5D0(arg0, arg1, 0x20);
}
