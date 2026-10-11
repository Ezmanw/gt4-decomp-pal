#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00476F50(s32, f32);                    /* extern */
f32 func_00477838();                                /* extern */

void func_00478B20(s32 arg0) {
    func_00476F50(arg0, func_00477838() + 0x1.0000000000000p+0f);
}
