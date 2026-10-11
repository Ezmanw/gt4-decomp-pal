#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00473E78(s32, s32, s32);                    /* extern */

s32 func_00473BC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00473E78(arg0, arg2, arg3);
    return arg0;
}
