/* compiler: ee-gcc2.9-991111 */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004547B8();                                /* extern */

extern char D_008465E0[];
void func_004578E8(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 == 1) {
            *(s32 *)D_008465E0 = func_004547B8();
        }
    }
}
