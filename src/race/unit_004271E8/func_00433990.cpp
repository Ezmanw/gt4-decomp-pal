#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00433950(s32, s32, s32);           /* extern */

void func_00433990(s32 arg0, s32 arg1, s32 arg2) {
    func_00433950(arg1, arg0 + (arg2 * 0x30) + 0x18, 8);
}
