#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00370028(s32);                         /* extern */
s32 func_003700A0(s32);                         /* extern */

void RacePhotoModeCameraManager__virtual_58(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 + 0xE28;
    func_00370028(temp_s0);
    func_003700A0(temp_s0);
}
