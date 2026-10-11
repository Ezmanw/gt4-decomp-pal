#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0045B698(s32);                             /* extern */
s32 func_0045B798(s32, s32, s32, s32);          /* extern */

s32 func_0045B740(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0045B798(arg0, arg1, arg2, func_0045B698(arg3));
    return arg0;
}
