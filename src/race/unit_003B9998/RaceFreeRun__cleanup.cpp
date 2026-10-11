#include "types.h"
#include "gt4/RaceFreeRun.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0038BAB8(void *, s32);             /* extern */
s32 func_0038BBD0(void *, s32);             /* extern */
s32 func_0038BC88(void *, s32);             /* extern */
s32 func_0038BD88(void *, s32);             /* extern */
s32 func_0038BDA8(void *, s32);             /* extern */
s32 RaceFreeRun__setDescriptionVoicePlay(void *, s32);             /* extern */
s32 RaceSolitaire__cleanup();                            /* extern */
s32 BGM__narrationFreeBuffer();                            /* extern */

void RaceFreeRun__cleanup(void *arg0) {
    RaceSolitaire__cleanup();
    ((struct RaceFreeRun *)arg0)->unk24698 = 0;
    ((struct RaceFreeRun *)arg0)->unk246A4 = 0;
    ((struct RaceFreeRun *)arg0)->unk246A0 = 0;
    RaceFreeRun__setDescriptionVoicePlay(arg0, 0);
    BGM__narrationFreeBuffer();
    func_0038BAB8(arg0, 0);
    func_0038BBD0(arg0, 0);
    func_0038BDA8(arg0, 0);
    func_0038BC88(arg0, 0);
    func_0038BD88(arg0, 0);
}
