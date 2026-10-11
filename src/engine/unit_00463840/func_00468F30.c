#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00468030(s32);                             /* extern */
s32 func_00468168(s32);                             /* extern */
s32 func_00468338(s32);                             /* extern */
s32 func_004684B0(s32);                         /* extern */
s32 func_00468780();                                /* extern */

void func_00468F30(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v0;

    temp_v0 = func_00468780();
    *arg0 = func_00468030(temp_v0);
    *arg1 = func_00468168(temp_v0);
    *arg2 = func_00468338(temp_v0);
    func_004684B0(temp_v0);
}
