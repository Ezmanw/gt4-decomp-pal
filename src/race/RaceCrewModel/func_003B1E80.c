#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003B08B0(s32, s32);                    /* extern */
s32 func_003B0E18();                            /* extern */

s32 func_003B1E80(s32 arg0, s32 arg1) {
    func_003B0E18();
    func_003B08B0(arg0 + 0x7E0, arg1 + 0x7E0);
    return arg0;
}
