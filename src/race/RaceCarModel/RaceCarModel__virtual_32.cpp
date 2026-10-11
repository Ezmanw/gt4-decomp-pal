#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004599A0(s32);                         /* extern */
s32 func_004599E8(s32, f32);                    /* extern */

void RaceCarModel__virtual_32(s32 *arg0, f32 fparg0) {
    func_004599A0(*arg0);
    func_004599E8(*arg0, fparg0);
}
