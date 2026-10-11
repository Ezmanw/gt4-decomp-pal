#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003062D8(s32, s32, s32 *);             /* extern */
s32 func_00323E28(s32);                             /* extern */

void func_00306748(s32 arg0, s32 *arg1) {
    func_003062D8(arg0, func_00323E28(*arg1), arg1);
}
