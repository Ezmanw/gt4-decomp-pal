#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s64 func_00447F30(s32);                             /* extern */
s32 func_005A609C(s32);                             /* extern */

void func_00430B48(s64 *arg0) {
    *arg0 = func_00447F30(func_005A609C(arg0 + 1));
}
