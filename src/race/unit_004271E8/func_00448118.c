#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00444178(s32, s32, s32);           /* extern */

extern char D_006235A8[];
s32 func_00448118(s32 arg0) {
    return ~func_00444178((s32)D_006235A8, arg0, 0x26) != 0;
}
