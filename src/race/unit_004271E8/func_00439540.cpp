#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00439448();                                /* extern */
s32 func_00439480(s32, s32, s32);               /* extern */

void func_00439540(s32 arg0, s32 arg1, s32 arg2) {
    if (func_00439448() != arg1) {
        func_00439480(arg0, arg1, arg2);
    }
}
