#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003060B8();                            /* extern */
s32 func_00328750(s32);                         /* extern */
s32 func_005C1628(s32 *);                       /* extern */

void func_00327AF8(s32 *arg0, s32 arg1) {
    if (*arg0 != 0) {
        func_003060B8();
        func_00328750(*arg0);
        *arg0 = 0;
    }
    if (arg1 & 1) {
        func_005C1628(arg0);
    }
}
