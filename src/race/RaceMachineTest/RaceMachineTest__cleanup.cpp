#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0038BAB8(s32, s32);                /* extern */
s32 func_0038BBD0(s32, s32);                /* extern */
s32 RaceSolitaire__cleanup();                            /* extern */

void RaceMachineTest__cleanup(s32 arg0) {
    RaceSolitaire__cleanup();
    func_0038BAB8(arg0, 0);
    func_0038BBD0(arg0, 0);
}
