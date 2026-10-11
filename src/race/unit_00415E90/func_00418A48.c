#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00416ED8();                            /* extern */
s32 func_004193E8(s32);                         /* extern */

void func_00418A48(s32 arg0) {
    func_00416ED8();
    func_004193E8(arg0 + 0x360);
}
