#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 *func_00385E30(s32);                            /* extern */
s32 *func_00385E40(s32);                            /* extern */
s32 *func_00385E50(s32);                            /* extern */
s32 *func_00385E80(s32);                            /* extern */

void func_004148F8(s32 *arg0) {
    *func_00385E30(*arg0) = 0;
    *func_00385E80(*arg0) = 0;
    *func_00385E40(*arg0) = 0;
    *func_00385E50(*arg0) = 0;
}
