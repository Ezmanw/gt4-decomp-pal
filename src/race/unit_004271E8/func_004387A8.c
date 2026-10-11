#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_004386B8(s32);                             /* extern */

u32 func_004387A8(s32 *arg0) {
    return (u32) ~func_004386B8(*arg0) >> 0x1F;
}
