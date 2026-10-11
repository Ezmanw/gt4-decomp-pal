#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

f32 func_00477838(s32);                             /* extern */
s32 func_0047DED8(s32, f32);                    /* extern */

void func_0047B038(s32 arg0, s32 arg1) {
    func_0047DED8(arg0, func_00477838(arg1));
}
