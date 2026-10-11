#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s16 func_002FF998();                                /* extern */

s32 func_002FFAB8(s32 arg0, s16 *arg1) {
    *arg1 = func_002FF998();
    return arg0;
}
