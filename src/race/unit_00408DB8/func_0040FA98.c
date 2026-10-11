#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_0040F9F0(f32);                             /* extern */
s32 func_00414948(f32, f32);                    /* extern */

void func_0040FA98(f32 fparg0, f32 fparg1) {
    func_00414948(fparg0, func_0040F9F0(fparg1));
}
