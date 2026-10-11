#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 RaceArcadeSingle__structor_0(s32);                         /* extern */
s32 exception__structor_0(s32);                         /* extern */

s32 func_003877F0(void) {
    s32 temp_v0;

    temp_v0 = exception__structor_0(0x24100);
    RaceArcadeSingle__structor_0(temp_v0);
    return temp_v0;
}
