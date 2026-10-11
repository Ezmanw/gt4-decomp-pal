#include "types.h"
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_0034C2F0();                              /* extern */
s32 func_0035E170(s32, s32, s32);           /* extern */

void func_0035AF58(s32 *arg0, s32 arg1) {
    if ((u32) (M2C_FIELD(func_0034C2F0(), s8 *, 0x56A) - 1) >= 2U) {
        func_0035E170(*arg0, arg1, 6);
    }
}
