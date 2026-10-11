#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 RaceBasic__cleanup();                            /* extern */
s32 func_0038BAB8(s32, s32);                /* extern */
s32 func_0038BBD0(s32, s32);                /* extern */
s32 func_0038BC88(s32, s32);                /* extern */
s32 func_0038BD88(s32, s32);                /* extern */
s32 func_0038BDA8(s32, s32);                /* extern */

void RaceChampionship__cleanup(s32 arg0) {
    RaceBasic__cleanup();
    func_0038BAB8(arg0, 0);
    func_0038BDA8(arg0, 0);
    func_0038BC88(arg0, 0);
    func_0038BD88(arg0, 0);
    func_0038BBD0(arg0, 0);
}
