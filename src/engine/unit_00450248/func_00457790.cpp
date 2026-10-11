#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004576D8(s32, s32, s32);           /* extern */
s32 ModelSet2__evalHostMethod();                            /* extern */

void func_00457790(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        ModelSet2__evalHostMethod();
        func_004576D8(arg0, 1, arg1);
    }
}
