#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00206928();                                /* extern */
s32 func_00206938(s32);                             /* extern */
s32 func_00206CE8(s32, s32, s32);               /* extern */

void func_00206DD8(s32 arg0) {
    s32 temp_s1;

    temp_s1 = func_00206928();
    func_00206CE8(arg0, temp_s1, func_00206938(arg0));
}
