#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00417090();                            /* extern */
s32 func_00419B90(s32, s32);                    /* extern */

s32 func_00418AE0(s32 arg0, s32 arg1) {
    func_00417090();
    func_00419B90(arg0 + 0x360, arg1 + 0x360);
    return arg0;
}
