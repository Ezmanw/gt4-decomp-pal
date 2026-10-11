#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0044F978(s32);                         /* extern */
s32 func_005F6380(s32);                         /* extern */
s32 func_00603E98();                            /* extern */

void func_0044F900(s32 arg0) {
    func_00603E98();
    func_005F6380(arg0 + 0x100);
    func_0044F978(arg0);
}
