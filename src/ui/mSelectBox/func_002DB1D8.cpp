#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00231B18(s32);                             /* extern */
s32 func_002DACA8(s32, s32);                    /* extern */
s32 func_002DB458(s32, s32);                    /* extern */
s32 func_0057CE40(s32, s32);                    /* extern */

void func_002DB1D8(s32 arg0, s32 arg1, s32 arg2) {
    func_0057CE40(arg0 + 0xBC, arg2);
    func_002DB458(arg0, func_00231B18(arg1));
    func_002DACA8(arg0, arg1);
}
