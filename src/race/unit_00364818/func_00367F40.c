#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00367B58();                            /* extern */
s32 func_00367BC8(s32, s32, s32);               /* extern */
s32 func_00367DA8(s32, s32, s32);               /* extern */

void func_00367F40(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00367B58();
    if (arg2 != 0) {
        func_00367DA8(arg0, arg1, arg3);
        func_00367BC8(arg0, arg1, arg3);
    }
}
