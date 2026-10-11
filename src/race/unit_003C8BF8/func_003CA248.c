#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00343D78();                                /* extern */
s32 func_0035AFC0(s32);                             /* extern */
s32 GetPitStopStatus(s32);                             /* extern */

s32 func_003CA248(s32 arg0) {
    if ((func_00343D78() != 1) && (func_0035AFC0(arg0) != 0)) {
        return GetPitStopStatus(arg0);
    }
    return 0;
}
