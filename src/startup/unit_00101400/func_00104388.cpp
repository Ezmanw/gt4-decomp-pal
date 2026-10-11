#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00102A48(s32);                         /* extern */
s32 func_00104170();                            /* extern */
s32 func_0010AE48(s32, f32);                        /* extern */

void func_00104388(s32 arg0, s32 arg1, f32 fparg0) {
    func_00104170();
    if (func_0010AE48(arg0 + 0x30, fparg0) != 0) {
        func_00102A48(arg1);
    }
}
