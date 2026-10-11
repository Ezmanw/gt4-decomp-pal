#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00476B68(s32);                         /* extern */
s32 func_00476C98(s32);                         /* extern */

void func_00476728(s32 arg0, s32 arg1) {
    func_00476B68(arg0 + 0x18C);
    func_00476C98(arg1);
}
