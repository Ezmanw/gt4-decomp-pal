#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0043A770();                            /* extern */
s32 func_005A48D8(s32, s32, s32);       /* extern */

extern char D_00687960[];
void func_0042FB98(s32 *arg0) {
    func_0043A770();
    *arg0 = (s32)D_00687960;
    func_005A48D8(arg0 + 2, 0, 0x88);
}
