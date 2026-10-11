#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_004325E0(s32 arg0, u32 arg1) {
    if (arg1 < 0xAU) {
        return arg0 + (arg1 * 0x2C) + 4;
    }
    return 0;
}
